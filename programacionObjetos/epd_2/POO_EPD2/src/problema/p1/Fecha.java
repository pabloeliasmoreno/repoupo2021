package problema.p1;

public class Fecha {

    private int dia;
    private int mes;
    private int anyo;
    private boolean bisiesto;

    public Fecha(){
        dia = 1;
        mes = 1;
        anyo = 1990;
    }
    
    public int getDia() {
        return dia;
    }

    public int getMes() {
        return mes;
    }

    public int getAnyo() {
        return anyo;
    }

    public void setMes(int mes) {
        if (mes <= 12 && mes >= 1) {
            this.mes = mes;
        } else {
            System.out.println("El mes debe ser un valor entre 1 y 12");
        }
    }

    public void setAnyo(int anyo) {
        this.anyo = anyo;
    }

    public boolean isBisiesto(int anyo) {
        if (anyo % 4 == 0 && anyo % 100 != 0) {
            return true;
        } else {
            return false;
        }
    }

    public boolean isBisiesto() {
        return bisiesto;
    }

    public void setBisiesto(boolean bisiesto) {
        if (bisiesto == false && (anyo % 4 == 0 && anyo % 100 != 0)) //asegura que es bisiesto
        {
            this.bisiesto = bisiesto;
        }
    }

    public void setDia(int dia) {
        if (dia < 1 && dia > 31) {
            System.out.println("El dia debe estar entre 1 y 31");
        } else {
            if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 11) {
                if (dia > 30) {
                    System.out.println("El dia debe estar entre 1 y 30 para el mes introducido");
                } else {
                    this.dia = dia;
                }
            } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                if (dia > 31) {
                    System.out.println("El dia debe estar entre 1 y 30 para el mes introducido");
                } else {
                    this.dia = dia;
                }
            } else {
                if (bisiesto) {
                    if (dia > 29) {
                        System.out.println("Para el mes y anyo elegido el dia debe estar entre 1 y 29");
                    } else {
                        this.dia = dia;
                    }
                } else {
                    if (dia > 28) {
                        System.out.println("Para el mes y anyo elegido el dia debe estar entre 1 y 29");
                    } else {
                        this.dia = dia;
                    }
                }
            }
        }
    }

    public void imprimir() {
        System.out.println("La fecha introducida es " + getDia() + "/" + getMes() + "/" + getAnyo());
    }
}
