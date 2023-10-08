class Melee extends Weapons
{
  String weaponName;
  int crit;
  
  // Child Melee inherits Weapons
  // Constructor with Parameters 
   Melee(int damage, int rarity,String weaponName,int crit){
      this.damageHit(damage);
      this.rarityValue(rarity); 
      this.weaponName = weaponName;
      this.crit = crit; 
   } 
   
   public void weaponStats()
   {
       System.out.println("Weapon Stats");
       System.out.println("Weapon Name : "+ this.weaponName);
       // dmg is variable from parent Weapons
       System.out.println("Weapon Damage  : "+ this.dmg);
       // crit is variable from parent Weapons
       System.out.println("Weapon Crit Rate : "+ this.crit);
       System.out.println("Weapon Rarity  : "+ this.rare);
  
   }
   



}