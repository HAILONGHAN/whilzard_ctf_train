import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import kotlin.Metadata;
import kotlin.NoWhenBranchMatchedException;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import kotlin.sequences.Sequence;
import kotlin.sequences.SequencesKt;
import kotlin.text.StringsKt;

@Metadata(mv={1, 1, 13}, bv={1, 0, 3}, k=2, d1={"\000:\n\000\n\002\020\b\n\000\n\002\020$\n\002\020\f\n\002\020 \n\002\b\003\n\002\020\002\n\000\n\002\020\021\n\002\020\016\n\002\b\002\n\002\020\013\n\002\b\002\n\002\030\002\n\002\b\003\032 \020\000\032\0020\0012\030\020\002\032\024\022\004\022\0020\004\022\n\022\b\022\004\022\0020\0010\0050\003\032\024\020\006\032\0020\0012\f\020\007\032\b\022\004\022\0020\0010\005\032\031\020\b\032\0020\t2\f\020\n\032\b\022\004\022\0020\f0\013��\006\002\020\r\032\037\020\016\032\0020\017\"\006\b\000\020\020\030\0012\f\020\021\032\b\022\004\022\002H\0200\022H��\b\032\016\020\023\032\0020\0012\006\020\024\032\0020\f��\006\025"}, d2={"checksum", "", "grouped", "", "", "", "compress", "value", "main", "", "args", "", "", "([Ljava/lang/String;)V", "validateChar", "", "T", "c", "Lteam/p4/pudliszki/FlagChar;", "validateFlag", "flag", "pudliszki"})
public final class FlagCheckerKt
{
    public static final void main( String[] args)
    {
        Intrinsics.checkParameterIsNotNull(args, "args");String[] $receiver = {"p4{0157cehiklnstu_ccccccccc}"};
            String str1;
            if (validateFlag($receiver[0]) == 0)
            {
                str1 = "Nice!";System.out.print(str1);
            }
            else
            {
                str1 = "Not today";System.out.print(str1);
                int i = -1;System.exit(i); }



            String str2 = "Failed";System.out.print(str2);
            int j = -1;System.exit(j);        }


    public static final int validateFlag( String flag)
    {
        Intrinsics.checkParameterIsNotNull(flag, "flag");
        Object $receiver$iv;
        if ((true))
        {
            Sequence localSequence1 = SequencesKt.mapIndexed(SequencesKt.filter(SequencesKt.map(StringsKt.asSequence((CharSequence)flag),FlagCheckerKt$validateFlag$1.INSTANCE), FlagCheckerKt$validateFlag$2.INSTANCE), FlagCheckerKt$validateFlag$3.INSTANCE);
            int $i$f$groupBy;
            Map destination$iv$iv = (Map)new LinkedHashMap();
            int $i$f$groupByTo;
            List localList1;
            Integer localInteger;
            for (Iterator localIterator = localSequence1.iterator(); localIterator.hasNext(); localList1.add(localInteger))
            {
                Object element$iv$iv = localIterator.next();
                Pair c = (Pair)element$iv$iv;;Object key$iv$iv = Character.valueOf(((Character)((FlagChar)c.getFirst()).getC()).charValue());
                Map $receiver$iv$iv$iv = destination$iv$iv;
                Object value$iv$iv$iv = $receiver$iv$iv$iv.get(key$iv$iv);
                int $i$a$2$getOrPut;
                Object answer$iv$iv$iv = new ArrayList();

                $receiver$iv$iv$iv.put(key$iv$iv, answer$iv$iv$iv);List list$iv$iv = (List)(value$iv$iv$iv == null ?
                    answer$iv$iv$iv :

                    value$iv$iv$iv);
                c = (Pair)element$iv$iv;localList1 = list$iv$iv;
                localInteger = Integer.valueOf(((Number)c.getSecond()).intValue());
                System.out.print(((Number)c.getSecond()).intValue());
                System.out.print(": ");
                System.out.println(c.getFirst());
            }
            System.out.println(destination$iv$iv);
            return 0;
                    //checksum(destination$iv$iv);
        }

            $receiver$iv = "Failed";System.out.print($receiver$iv);

            int i = -1;System.exit(i);
        return 0;
    }

    private static final <T> boolean validateChar(FlagChar<T> c)
    {
        int $i$f$validateChar = 0;Object localObject = c.getC();
        if ((localObject instanceof Character)) {
            return true;
        }
        if ((localObject instanceof String)) {
            return false;
        }
        return false;
    }

    public static final int checksum( Map<Character, ? extends List<Integer>> grouped) {
        Intrinsics.checkParameterIsNotNull(grouped, "grouped");
        try {
            Collection destination$iv$iv = new ArrayList(grouped.size());
            for (Entry item$iv$iv : grouped.entrySet()) {
                destination$iv$iv.add(new Pair(Class.forName("team.p4.pudliszki." + String.valueOf(((Character) item$iv$iv.getKey()).charValue())).newInstance(), Integer.valueOf(compress((List) item$iv$iv.getValue()))));
            }
            Iterable<Pair> iterable = (List) destination$iv$iv;
            destination$iv$iv = new ArrayList(CollectionsKt.collectionSizeOrDefault(iterable, 10));
            for (Pair pair : iterable) {
                int intValue;
                Object first = pair.getFirst();
                if (first instanceof p) {
                    intValue = ((Number) pair.getSecond()).intValue() - 27040;
                } else if (first instanceof AnonymousClass4) {
                    intValue = ((Number) pair.getSecond()).intValue() - 1;
                } else if (first instanceof {) {
                    intValue = ((Number) pair.getSecond()).intValue() - 2;
                } else if (first instanceof AnonymousClass0) {
                    intValue = ((Number) pair.getSecond()).intValue() - 452;
                } else if (first instanceof AnonymousClass1) {
                    intValue = ((Number) pair.getSecond()).intValue() - 327;
                } else if (first instanceof AnonymousClass5) {
                    intValue = ((Number) pair.getSecond()).intValue() - 17;
                } else if (first instanceof AnonymousClass7) {
                    intValue = ((Number) pair.getSecond()).intValue() - 22;
                } else if (first instanceof c) {
                    intValue = ((Number) pair.getSecond()).intValue() - 23;
                } else if (first instanceof e) {
                    intValue = ((Number) pair.getSecond()).intValue() - 21;
                } else if (first instanceof h) {
                    intValue = ((Number) pair.getSecond()).intValue() - 786;
                } else if (first instanceof i) {
                    intValue = ((Number) pair.getSecond()).intValue() - 16;
                } else if (first instanceof k) {
                    intValue = ((Number) pair.getSecond()).intValue() - 643;
                } else if (first instanceof l) {
                    intValue = ((Number) pair.getSecond()).intValue() - 486;
                } else if (first instanceof n) {
                    intValue = ((Number) pair.getSecond()).intValue() - 8;
                } else if (first instanceof s) {
                    intValue = ((Number) pair.getSecond()).intValue() - 11;
                } else if (first instanceof t) {
                    intValue = ((Number) pair.getSecond()).intValue() - 5;
                } else if (first instanceof u) {
                    intValue = ((Number) pair.getSecond()).intValue() - 25;
                } else if (first instanceof _) {
                    intValue = ((Number) pair.getSecond()).intValue() - 19849;
                } else if (first instanceof }) {
                    intValue = ((Number) pair.getSecond()).intValue() - 27;
                } else {
                    intValue = -1337;
                }
                destination$iv$iv.add(Integer.valueOf(intValue));
            }
            return CollectionsKt.sumOfInt((List) destination$iv$iv);
        } catch (ClassNotFoundException e) {
            System.out.print("Failed");
            System.exit(-1);
            throw new RuntimeException("System.exit returned normally, while it was supposed to halt JVM.");
        }
    }

/*
    public static final int checksum(Map<Character, ? extends List<Integer>> grouped)
    {
        Intrinsics.checkParameterIsNotNull(grouped, "grouped");
        try
        {
            Object $receiver$iv$iv;
            Map localMap = grouped;
            int $i$f$map;
           Collection destination$iv$iv = (Collection)new ArrayList(((Map)$receiver$iv$iv).size());
            int $i$f$mapTo;
            Object localObject2 = $receiver$iv$iv;
            Entry item$iv$iv;
            Collection localCollection1;
            int FlagCheckerKt$checksum$1;
            Object localObject3;
            for (Iterator localIterator = ((Map)localObject2).entrySet().iterator(); localIterator.hasNext(); localCollection1.add(localObject3))
            {
                item$iv$iv = (Entry)localIterator.next();
                Entry localEntry1 = item$iv$iv;localCollection1 = destination$iv$iv;
                Entry entry;
                FlagCheckerKt$checksum$1 = 0;localObject3 = new Pair(Class.forName("team.p4.pudliszki." + String.valueOf(((Character)entry.getKey()).charValue())).newInstance(), Integer.valueOf(compress((List)entry.getValue())));
            }
            Object $receiver$iv = (Iterable)destination$iv$iv;
            int $i$f$map;
            Iterable $receiver$iv;
            Object $receiver$iv$iv = $receiver$iv;Collection destination$iv$iv = (Collection)new ArrayList(CollectionsKt.collectionSizeOrDefault($receiver$iv, 10));
            int $i$f$mapTo;
            for (localObject2 = ((Iterable)$receiver$iv$iv).iterator(); ((Iterator)localObject2).hasNext(); localCollection1.add(localObject3))
            {
                Object item$iv$iv = ((Iterator)localObject2).next();
                item$iv$iv = (Pair)item$iv$iv;localCollection1 = destination$iv$iv;
                Pair entry;
                int FlagCheckerKt$checksum$2 = 0;
                FlagCheckerKt$checksum$1 = entry.getFirst();
                localObject3 = Integer.valueOf((FlagCheckerKt$checksum$1 instanceof }) ? ((Number)entry.getSecond()).intValue() - 27 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof _) ? ((Number)entry.getSecond()).intValue() - 19849 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof u) ? ((Number)entry.getSecond()).intValue() - 25 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof t) ? ((Number)entry.getSecond()).intValue() - 5 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof s) ? ((Number)entry.getSecond()).intValue() - 11 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof n) ? ((Number)entry.getSecond()).intValue() - 8 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof l) ? ((Number)entry.getSecond()).intValue() - 486 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof k) ? ((Number)entry.getSecond()).intValue() - 643 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof i) ? ((Number)entry.getSecond()).intValue() - 16 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof h) ? ((Number)entry.getSecond()).intValue() - 786 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof e) ? ((Number)entry.getSecond()).intValue() - 21 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof c) ? ((Number)entry.getSecond()).intValue() - 23 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof 7) ? ((Number)entry.getSecond()).intValue() - 22 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof 5) ? ((Number)entry.getSecond()).intValue() - 17 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof 1) ? ((Number)entry.getSecond()).intValue() - 327 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof 0) ? ((Number)entry.getSecond()).intValue() - 452 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof {) ? ((Number)entry.getSecond()).intValue() - 2 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof 4) ? ((Number)entry.getSecond()).intValue() - 1 : ($i$f$mapTo-map-FlagCheckerKt$checksum$1 instanceof p) ? ((Number)entry.getSecond()).intValue() - 27040 : 64199);
        }
            return CollectionsKt.sumOfInt(

                    (Iterable)destination$iv$iv);
        }
        catch (ClassNotFoundException e)
        {
            Object $receiver$iv$iv = "Failed";System.out.print($receiver$iv$iv);
            int i = -1;System.exit(i);
        return 0;
        }
    }
/*
    public static final int compress(@NotNull List<Integer> value)
    {
        Intrinsics.checkParameterIsNotNull(value, "value");Multiplier m = new Multiplier(0, 1, null);

        SequencesKt.sumOfInt(SequencesKt.map(CollectionsKt.asSequence((Iterable)value), (Function1)new Lambda(m)
        {
            public final int invoke(int v)
            {
                return v * this.$m.get();
            }
        }));
    }*/
}
