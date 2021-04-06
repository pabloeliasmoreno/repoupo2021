package GesVol;
import poo.io.*;

public interface Colaborador {
    public final int menor = 1;
    public final int externo = 2;

    public void definirRelacion(int relacion);
    public void consultaRelacion();
}
