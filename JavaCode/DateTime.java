import java.time.LocalDateTime;

public class DateTime {
    public static void main(String[] args) {
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
