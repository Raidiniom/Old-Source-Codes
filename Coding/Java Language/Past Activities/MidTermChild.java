// Machine Problem #1 - MidTerm
class MidTermChild {
    private int Misc; // 5550
    private int Regis; // 790
    private int Lec; // 800
    private int Lab; // 700
    private int totalLab; // Total Lab = 700 * number of Lab
    private int Fee; // Fee = Lec + Lab + Misc + Regis
    private int perExam; //perExam = Fee/4
    private int Tuit; // Tuition = Lecture + Laboratory

    // where the fun begins

    //Miscellaneous
    public int getMisc(){
        return this.Misc = 5550;
    }
    public void setMisc(int Misc){
        this.Misc = Misc;
    }

    //Registration
    public int getRegis(){
        return this.Regis = 790;
    }
    public void setRegis(int Regis){
        this.Regis = Regis;
    }

    //Lecture
    public int getLec(){
        return this.Lec;
    }
    public void setLec(int Lec){
        this.Lec = Lec;
    }

    //Laboratory
    public int getLab(){
        return this.Lab;
    }
    public void setLab(int Lab){
        this.Lab = Lab;
    }

    //Total Laboratory
    public int getTL(){
        return this.totalLab = 700 * Lab;
    }
    public void setTL(int totalLab){
        this.totalLab = totalLab;
    }

    //Total Payables
    public int getFee(){
        return this.Fee = (800 * Lec) + (700 * Lab) + Misc + Regis;
    }
    public void setFee(int Fee){
        this.Fee = Fee;
    }
    
    //Payables per Exam
    public int getpE(){
        return this.perExam = Fee/4;
    }
    public void setpE(int perExam){
        this.perExam = perExam;
    }

    //Tuition
    public int getTT(){
        return this.Tuit = (800 * Lec) + (700 * Lab);
    }
    public void setTT(int Tuit){
        this.Tuit = Tuit;
    }

    //Present
    public void display(){
        System.out.print("----------------");
        System.out.print("\nFees: ");
        System.out.print("\n   Tuition:         " +getTT());
        System.out.print("\n   Laboratory:      " +getTL());
        System.out.print("\n   Registration:    " +getRegis());
        System.out.print("\n   Miscellaneous:   " +getMisc());
        System.out.print("\n   Total Payables:  " +getFee());
        System.out.print("\n");
        System.out.print("\nPayables per Exam:  " +getpE());
    }
}
