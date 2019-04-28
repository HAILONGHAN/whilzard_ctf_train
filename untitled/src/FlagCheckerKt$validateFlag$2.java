
import kotlin.Function;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import java.lang.Boolean;

final class FlagCheckerKt$validateFlag$2  implements Function1<FlagChar<Character>, Boolean> {
    public static final FlagCheckerKt$validateFlag$2 INSTANCE = new FlagCheckerKt$validateFlag$2();

    FlagCheckerKt$validateFlag$2() {
        super();
    }

    public final Boolean invoke( FlagChar<Character> c) {
        Intrinsics.checkParameterIsNotNull(c, "c");
        Object c2 = c.getC();
        if (c2 instanceof Character) {
            return new Boolean(true);
        }
        return  new Boolean(false);
    }
}