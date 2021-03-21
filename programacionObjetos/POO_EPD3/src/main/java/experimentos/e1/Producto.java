/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package experimentos.e1;

/**
 *
 * @author Manuel
 */
public class Producto {
  private String nombre;
  private float precio;
  private int unidades;
  
 public Producto(){
     
 }

 public Producto(String nombre, float precio, int unidades){
     setNombre(nombre);
     setPrecio(precio);
     setUnidades(unidades);
     // Tambien valido con this
     this.nombre = nombre;
     this.precio = precio;
     this.unidades = unidades;
 }
  
  public float valorEnStock() {
    return unidades * precio;
  }

  public void incrementarStock(int incremento) {
    unidades = unidades + incremento;
  }
  
  // incrementarStock v2 (sin parametros de entrada)
  public void incrementarStockv2(){
      unidades++;
  }

  public void disminuirStock(int decremento) {
    unidades = unidades - decremento;
  }
  
  // disminuirStock v2 (sin parametros de entrada)
  public void disminuirStockv2(){
      unidades = unidades--;
  }
  
public String getNombre() {
    return nombre;
  }

  public float getPrecio() {
    return precio;
  }

  public int getUnidades() {
    return unidades;
  }

  public void setNombre(String nombre) {
    this.nombre = nombre;
  }

  public void setUnidades(int unidades) {
    this.unidades = unidades;
  }

  public void setPrecio(float precio) {
    if (precio > 0) {
      this.precio = precio;
    } else {
      this.precio = -precio;
    }
  }
}