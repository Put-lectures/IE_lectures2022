#ifndef RECTANGLE_H
#define RECTANGLE_H

class cRect
{
public:
    //    cRect();
    //    cRect(float h, float w);

    cRect(float h = 10, float w = 5, float xc = 0, float yc = 0);
    void move(float delta_x, float delta_y);

    float cricumference();

    void print() const;

    void set_width(float width);
    float width() const;

    float height() const;
    void set_height(float newHeight);
    ~cRect();

private:
    float width_;
    float height_;
    float xc_;
    float yc_;
    float *array_;
};

#endif // RECTANGLE_H
