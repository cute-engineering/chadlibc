double
fmod(double x, double y)
{
    return x - (int)(x / y) * y;
}