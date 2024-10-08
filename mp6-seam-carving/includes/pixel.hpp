#ifndef PIXEL_HPP
#define PIXEL_HPP

// DO NOT MODIFY
class Pixel {
public:
  Pixel() = default;

  Pixel(int r, int g, int b): red_(r), green_(g), blue_(b) {}

  int GetRed() const { return red_; }

  int GetGreen() const { return green_; }

  int GetBlue() const { return blue_; }

  friend bool operator==(const Pixel& lhs, const Pixel& rhs) {
    return lhs.red_ == rhs.red_ && lhs.green_ == rhs.green_ &&
           lhs.blue_ == rhs.blue_;
  }

private:
  int red_ = 0;
  int green_ = 0;
  int blue_ = 0;
};

#endif