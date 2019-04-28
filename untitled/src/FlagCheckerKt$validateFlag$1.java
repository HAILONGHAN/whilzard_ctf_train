import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Lambda;

final class FlagCheckerKt$validateFlag$1  implements Function1<Character, FlagChar<Character>> {
    public static final FlagCheckerKt$validateFlag$1 INSTANCE = new FlagCheckerKt$validateFlag$1();

    FlagCheckerKt$validateFlag$1() {
        super();
    }


    public final FlagChar<Character> invoke(Character c) {
        return new FlagChar(Character.valueOf(c.charValue()));
    }
}