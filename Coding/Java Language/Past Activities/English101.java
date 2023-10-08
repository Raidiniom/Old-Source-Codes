import java.util.*;

class Eng101
{
    private int edpCodeE;
    public String courseTitleE;
    
    public int getpriEDP()
    {
        return this.edpCodeE;
    }
    public void setpriEDP(int edpCodeE)
    {
        this.edpCodeE = edpCodeE;
    }
    
    public void display()
    {
        System.out.print("\nCourse Title: " +courseTitleE);
    }
}