package GesVol;

public class Empresa implements Colaborador{

    protected int relVoluntario;
    protected int actividadesPatrocinadas;
    protected int tipoPatrocinio;

    protected final int economico = 1;
    protected final int material = 2;
    protected final int publicitario = 3;
    protected final int otros = 4;

    public int getRelVoluntario(){
        return relVoluntario;
    }

    public void setRelVoluntario(int relacion){
        relVoluntario = relacion;
    }

    public int getTipoPatrocinio(){
        return tipoPatrocinio;
    }

    public void setTipoPatrocinio(int tipo){
        tipoPatrocinio = tipo;
    }

    @Override
    public void definirRelacion(int relacion) {
        if (relacion==2){
            relVoluntario = externo;
            System.out.println("SE HA DEFINIDO UNA RELACION CON UNA EMPRESA");
        }
    }

    @Override
    public void consultaRelacion() {
        System.out.println("LA RELACION ES DE EMPRESA");
    }

    public void setActividadesPatrocinadas(int actividadesPatrocinadas){
        this.actividadesPatrocinadas = actividadesPatrocinadas + this.actividadesPatrocinadas;
    }

    public int getActividadesPatrocinadas() {
        return actividadesPatrocinadas;
    }

    public void mostrarActividadesPatrocinadas(){
        System.out.println("SE HAN PATROCINADO "+getActividadesPatrocinadas()+" ACTIVIDADES");
    }
}
