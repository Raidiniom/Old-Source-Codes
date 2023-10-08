class Range extends Weapons
{
  String weaponName;
  int crit;
  int range;
  int recoil;
  
  // Child Range inherits Weapons
  // Constructor with Parameters 
   Range(int damage, int rarity,String weaponName,int crit,int range,int recoil){
      this.damageHit(damage);
      this.rarityValue(rarity); 
      this.weaponName = weaponName;
      this.crit = crit;
      this.range = range; 
      this.recoil = recoil;
   } 
   
   public void weaponStats()
   {
    System.out.println("Weapon Stats");
    System.out.println("Weapon Name : "+ this.weaponName);
    // dmg is variable from parent Weapons
    System.out.println("Weapon Damage  : "+ this.dmg);
    // crit is variable from parent Weapons
    System.out.println("Weapon Crit Rate : "+ this.crit);
    System.out.println("Weapon Attack Range: "+ this.range);
    System.out.println("Weapon Attack Recoil: "+ this.recoil);
    System.out.println("Weapon Rarity  : "+ this.rare);

   
   }
   



}