
from pathlib import Path
from PIL import Image, ImageDraw

# Thu muc anh thoi tiet
folder = Path(__file__).resolve().parent / "images" / "weather"

# Kich thuoc weather card
WIDTH = 296
HEIGHT = 122
RADIUS = 12

names = [
    "weather_bg_sunny",
    "weather_bg_cloudy",
    "weather_bg_rain",
    "weather_bg_storm",
    "weather_bg_night_clear",
    "weather_bg_fog",
]

for name in names:
    path = folder / f"{name}.png"

    if not path.exists():
        print(f"Khong tim thay: {path}")
        continue

    image = Image.open(path).convert("RGBA")
    image = image.resize(
        (WIDTH, HEIGHT),
        Image.Resampling.LANCZOS
    )

    # Tao mask bo goc
    mask = Image.new("L", (WIDTH, HEIGHT), 0)
    draw = ImageDraw.Draw(mask)

    draw.rounded_rectangle(
        (0, 0, WIDTH - 1, HEIGHT - 1),
        radius=RADIUS,
        fill=255
    )

    # Ap dung bo goc
    alpha = image.getchannel("A")
    from PIL import ImageChops
    image.putalpha(ImageChops.multiply(alpha, mask))

    image.save(path)
    print(f"OK: {name}.png")

print("Da xu ly xong!")
