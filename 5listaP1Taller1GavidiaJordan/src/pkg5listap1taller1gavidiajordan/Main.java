/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pkg5listap1taller1gavidiajordan;
import java.util.Scanner;
/**
 *
 * @author ESPE
 */

public class Main {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner Datos = new Scanner (System.in);
        System.out.println("Universidad de las Fuerzas Armadas ESPE SD");
        System.out.println("ESTUDIANTE: JORDAN JAIR GAVIDIA CARRILLO");
        System.out.println("CARRERA: ITIN");
        System.out.println("ASIGNATURA: Programacion Orientada a Objetos");
        System.out.println("NIVEL: Segundo Nivel");
        System.out.println("DOCENTE: Martínez Verónica");
        System.out.println("TEMA: Adivinansa del 1 al 99");
        System.out.println("#############################################");
        System.out.println("Ingrese primer dato : ");
        //print = sin salto de linea
        //println = con slato de linea
        int dato1 = Datos.nextInt();
        System.out.println("Ingrese primer dato : ");
        int dato2 = Datos.nextInt();
        
        System.out.println("### Operaciones ###");
        int suma = dato1 + dato2;
        System.out.println("Suma: "+suma);
        int resta = dato1 - dato2;
        System.out.println("Suma: "+resta);
        int multi = dato1 * dato2;
        System.out.println("Suma: "+multi);
        int divi = dato1 / dato2;
        System.out.println("Suma: "+divi);
        // TODO code application logic here
    }
    
}
