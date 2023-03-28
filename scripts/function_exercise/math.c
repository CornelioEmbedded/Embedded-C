
int suma(int a, int b)
{
    int suma = a + b;
    return suma;
}

int resta(int a, int b)
{
    int resta;
    if (a>b)
    {
        resta = a - b;
    }else{
        resta = b - a;
    }
    return resta;
}

int multiplicacion(int a, int b)
{
    int multiplicacion = a * b;
    return multiplicacion;
}

float division(int a, int b)
{
    int division;
    if (a>b)
    {
        division = a / b;
    }else{
        division = b / a;
    }
    return division;
}
