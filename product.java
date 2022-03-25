import java.util.*;
class product
{
  int pcode[]=new int[10];
  String pname[]=new String[10];
  int price[]=new int[10];
  Scanner sc=new Scanner(System.in);
  void insert(int j)
  { 
    for(int i=0;i<j;i++)
    {
    System.out.println("Enter the product"+i+1+" deatails");
    System.out.print("Product name:");
    pname[i]=sc.nextLine();
    System.out.print("Product code:");
    pcode[i]=sc.nextInt();
    System.out.println("Product price:");
    price[i]=sc.nextInt();
    }
    System.out.println(pcode[1]);
  }
  void display(int j)
  {
    for(int i=0;i<j;i++)
    {
    System.out.println("Product code:"+pcode[i]);
    System.out.println("Product name:"+pname[i]);
    System.out.println("Product price:"+price[i]);
    }
  }
  void displaylowest(int j)
  { 
    String p="";
    for(int i=0;i<j;i++)
    {
    for(int k=i;k<j;k++)
    {
    if(price[i]<=price[k])
    {
    p=pname[i];
    }
    }
    }
    System.out.println("The product with lowest price is "+p);
  }
}
class Products
{
  public static void main(String args[])
  { 
   Scanner s=new Scanner(System.in);
   System.out.println("Enter the no. of products");
   int n=s.nextInt();
   product p=new product();
   p.insert(n);
   product p1=new product();
   p1.display(n);
   product p2=new product();
   p2.displaylowest(n);
   }
}
  
