package GesVol;

public class Afiliado extends Persona implements Colaborador {

    protected int relVoluntario;
    protected int actividadesRealizadas;

    public int getRelVoluntario() {
        return relVoluntario;
    }

    public void setRelVoluntario(int relVoluntario) {
        this.relVoluntario = relVoluntario;
    }

    public int getActividadesRealizadas() {
        return actividadesRealizadas;
    }

    public void setActividadesRealizadas(int actividadesRealizadas) {
        this.actividadesRealizadas = actividadesRealizadas;
    }

    public Afiliado(String nombre, String apellido, int identificacion, int dia, int mes, int anyo) {
        super(nombre, apellido, identificacion, dia, mes, anyo);
    }

    @Override
    public void definirRelacion(int relacion) {
        if (relacion==1){
            relVoluntario = menor;
            System.out.println("SE HA DEFINIDO UNA RELACION DE MENOR DE EDAD");
        }
    }

    @Override
    public void consultaRelacion() {
        System.out.println("LA RELACION ES DE MENOR DE EDAD");
    }
}
