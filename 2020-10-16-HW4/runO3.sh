for N in 1 2 10 100 200 500 ; do
    echo -n "$N  "
    ./eigen-AxxO3.x $N 2
done > datosO3.txt
