import java.io.*;


public class Main
{
    public static void main(String[] args) throws IOException
    {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);


        System.out.println("Introduceti latura a:");
        String s1 = br.readLine();
        double a = Double.parseDouble(s1);


        System.out.println("Introduceti latura b:");
        String s2 = br.readLine();
        double b = Double.parseDouble(s2);


        System.out.println("Introduceti latura c:");
        String s3 = br.readLine();
        double c = Double.parseDouble(s3);


        double p = (a + b + c) / 2;




        double aria = Math.sqrt(p * (p - a) * (p - b) * (p - c));
        System.out.println("Aria triunghiului este: " + aria);
    }
}
