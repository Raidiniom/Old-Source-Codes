import java.util.*;
/* FINISH THIS IF INTERESTED */
class ZodiacChild {
    private String Name;
    private int Age;
    private String Month;
    private int Day;
    private int Year;

    // where the fun begins

    // User Name
    public String getName(){
        return this.Name;
    }
    public void setName(String Name){
        this.Name = Name;
    }

    // User Age
    public int getAge(){
        return this.Age = 2023 - Year;
    }
    public void setAge(int Age){
        this.Age = Age;
    }

    // Month
    public String getMonth(){
        return this.Month;
    }
    public void setMonth(String Month){
        this.Month = Month;
    }
    
    // Month
    public int getDay(){
        return this.Day;
    }
    public void setDay(int Day){
        this.Day = Day;
    }

    // Month
    public int getYear(){
        return this.Year;
    }
    public void setYear(int Year){
        this.Year = Year;
    }

    public void zodSign(){
        switch(Month){
                //
            case "Jan":
            case "January":
            break;
                //
            case "Feb":
            case "February":
            break;
                //
            case "Mar":
            case "March":
            break;
                //
            case "Apr":
            case "April":
            break;
                //
            case "May":
            break;
                //
            case "Jun":
            case "June":
            break;
                //
            case "Jul":
            case "July":
            break;
                //
            case "Aug":
            case "August":
            break;
                //
            case "Sep":
            case "September":
            break;
                //
            case "Oct":
            case "October":
            break;
                //
            case "Nov":
            case "November":
            break;
                //
            case "Dec":
            case "December":
            break;
                //
            default:
            System.out.print("No Month Matches! ");
        }
    }
}

// System.out.print(" ");