enum Currency{
    DOLLAR("USD","D"), RUPEE("INR","R"), EURO("EUR","E");

    String code;
    String symbol;

    Currency(String code, String symbol)
    {
        this.code = code;
        this.symbol= symbol;
    }

    public String getDetails()
    {
        return code + " --> " + symbol;
    }

}
public class CurrencySymbol {
    public static void main(String[] args) {
        System.out.println(Currency.EURO.getDetails());
    }
    
}
