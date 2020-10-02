# include <iostream>
# include <cmath>
# include <cstdlib>

float p(float x);
float q(float x);
float r(float x);

int main(int argc, char **argv)
{
    float x = std::atof(argv[1]);
    std::cout.precision(15);
    std::cout.setf(std::ios::scientific);
    std::cout << x << "\t" << p(x) << "\t" << q(x) << "\t" << r(x) << "\n";

    // Escriba acá cuál función usaría siempre y porqué
    /*
      En este caso (x->1), utilizaría el método  p(x) porque devuelve
      el valor más cercano a lo que matemáticamente esperaría.
    */
    return 0;
}

float p(float x)
{
    float temp = std::pow(1-x,8);
    return temp;
}

float q(float x)
{
    float temp = 1 - 8*x + 28*x*x - 56*x*x*x
        + 70*x*x*x*x - 56*x*x*x*x*x + 28*x*x*x*x*x*x
        - 8*x*x*x*x*x*x*x + x*x*x*x*x*x*x*x;
    return temp;
}

float r(float x)
{
    float temp = 1 - 8*x + 28*std::pow(x,2) - 56*std::pow(x,3)
        + 70*std::pow(x,4) - 56*std::pow(x,5) + 28*std::pow(x,6)
        - 8*std::pow(x,7) + std::pow(x,8);
    return temp;
}
