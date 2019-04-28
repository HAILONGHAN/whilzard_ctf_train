
import kotlin.Pair;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

final class FlagCheckerKt$validateFlag$3  implements Function2<Integer, FlagChar<Character>, Pair< FlagChar<Character>,Integer>> {
    public static final FlagCheckerKt$validateFlag$3 INSTANCE = new FlagCheckerKt$validateFlag$3();

    FlagCheckerKt$validateFlag$3() {
        super();
    }


    public final Pair<FlagChar<Character>, Integer> invoke(Integer i,  FlagChar<Character> c) {
        return new Pair(c, Integer.valueOf(i.intValue()));
    }
}