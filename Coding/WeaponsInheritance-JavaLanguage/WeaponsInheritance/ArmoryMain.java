import java.util.Scanner;

public class ArmoryMain
{
  public static void main(String args[])
  {
  // Name of Weapon
    String nameOfWeapon;
    int damages;  
    int critical;
    int rareValue;
    int options;
    int range;
    int recoil;
    boolean isTrue = true;
    Scanner scan = new Scanner(System.in);
    Scanner scanner = new Scanner(System.in);
     do{
     // Choice Weapon Type , Choice Two Objects Range & Melee Child Class
       System.out.println("[1] - Melee \n[2] - Range");
       System.out.println("Select your Weapon Type");
       options = scanner.nextInt();    
         

          if(options==1)
          {
                System.out.println("Melee Weapon Type  ");
                System.out.println("Input the name of your Weapon : ");
                nameOfWeapon = scan.nextLine();
                System.out.println("Damage Value : ");
                damages = scanner.nextInt();
                System.out.println("Critical hit : ");
                critical = scanner.nextInt();
                System.out.println("Rarity hit : ");
                rareValue = scanner.nextInt();      
                // Melee Object with Parameters  
                // Parameter must match in the Constructor from Child class 
                Melee meleeObj = new Melee(damages,rareValue,nameOfWeapon,critical);
                meleeObj.weaponStats(); 
                isTrue =true;
          }
          else if(options==2)
          {
                System.out.println("Range Weapon Type  ");
                System.out.println("Input the name of your Weapon : ");
                nameOfWeapon = scan.nextLine();
                System.out.println("Damage Value : ");
                damages = scanner.nextInt();
                System.out.println("Critical hit : ");
                critical = scanner.nextInt();
                System.out.println("Weapon Range : ");
                range = scanner.nextInt();
                System.out.println("Weapon Recoil : ");
                recoil = scanner.nextInt();
                System.out.println("Rarity hit : ");
                rareValue = scanner.nextInt();              
             // Range Object with Parameters
             // Parameter must match in the Constructor from Child class 
             Range rangeObj = new Range(damages ,rareValue , nameOfWeapon , critical, range ,recoil);
             rangeObj.weaponStats(); 
              isTrue =true;
          }
          else
          {
            System.out.println("Invalid Input");
            isTrue =false;
          }
        
  }while(isTrue!=true);


 }
}