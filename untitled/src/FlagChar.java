
public final class FlagChar<T> {
    private final T c;


    public static /* synthetic */ FlagChar copy$default(FlagChar flagChar, Object obj, int i, Object obj2) {
        if ((i & 1) != 0) {
            obj = flagChar.c;
        }
        return flagChar.copy(obj);
    }

    public final T component1() {
        return this.c;
    }


    public final FlagChar<T> copy(T c) {
        return new FlagChar(c);
    }

    /* JADX WARNING: inconsistent code. */
    /* Code decompiled incorrectly, please refer to instructions dump. */
    public boolean equals( java.lang.Object r3) {
        /*
        r2 = this;
        if (r2 == r3) goto L_0x0012;
    L_0x0002:
        r0 = r3 instanceof team.p4.pudliszki.FlagChar;
        if (r0 == 0) goto L_0x0014;
    L_0x0006:
        r3 = (team.p4.pudliszki.FlagChar) r3;
        r0 = r2.c;
        r1 = r3.c;
        r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1);
        if (r0 == 0) goto L_0x0014;
    L_0x0012:
        r0 = 1;
    L_0x0013:
        return r0;
    L_0x0014:
        r0 = 0;
        goto L_0x0013;
        */
        throw new UnsupportedOperationException("Method not decompiled: team.p4.pudliszki.FlagChar.equals(java.lang.Object):boolean");
    }

    public int hashCode() {
        Object obj = this.c;
        return obj != null ? obj.hashCode() : 0;
    }


    public String toString() {
        return "FlagChar(c=" + this.c + ")";
    }

    public FlagChar(T c) {
        this.c = c;
    }

    public final T getC() {
        return this.c;
    }
}