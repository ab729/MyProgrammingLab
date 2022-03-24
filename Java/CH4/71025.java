import java.util.Scanner;
public class AreaHexagon
{
public static void main(String[] args)
{
  
Scanner scnr = new Scanner(System.in);
  
System.out.print("Enter the side:");
double s = scnr.nextDouble();
double area=(6*(s*s))/(4*Math.tan(Math.PI/6));
System.out.printf("The area of the hexagon is %.2f\n",area);
}}
