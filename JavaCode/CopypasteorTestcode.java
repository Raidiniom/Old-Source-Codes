import ;

public class CopypasteorTestcode {
    public static void main(String[] args) {
        // TEST RUN FOR ANY NEWLY DISCOVERED METHODS OR FUNCTIONS

        LocalDateTime timenow = LocalDateTime.now();

        int year = timenow.getYear();
        int month = timenow.getMonthValue();
        int day = timenow.getDayOfMonth();

        int hour = timenow.getHour();
        int minute = timenow.getMinute();
        int seconds = timenow.getSecond();

        System.out.println("Date: "+day+"/"+month+"/"+year);
        System.out.println("Time: "+hour+":"+minute+":"+seconds);
    }
}


// System.out.print();