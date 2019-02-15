/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.constants;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftStruct("struct3")
public final class Struct3
{
    @ThriftConstructor
    public Struct3(
        @ThriftField(value=1, name="a", requiredness=Requiredness.NONE) final String a,
        @ThriftField(value=2, name="b", requiredness=Requiredness.NONE) final int b,
        @ThriftField(value=3, name="c", requiredness=Requiredness.NONE) final test.fixtures.constants.Struct2 c
    ) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public static class Builder {
        private String a;

        public Builder setA(String a) {
            this.a = a;
            return this;
        }
        private int b;

        public Builder setB(int b) {
            this.b = b;
            return this;
        }
        private test.fixtures.constants.Struct2 c;

        public Builder setC(test.fixtures.constants.Struct2 c) {
            this.c = c;
            return this;
        }

        public Builder() { }
        public Builder(Struct3 other) {
            this.a = other.a;
            this.b = other.b;
            this.c = other.c;
        }

        public Struct3 build() {
            return new Struct3 (
                this.a,
                this.b,
                this.c
            );
        }
    }

    private final String a;

    @ThriftField(value=1, name="a", requiredness=Requiredness.NONE)
    public String getA() { return a; }

    private final int b;

    @ThriftField(value=2, name="b", requiredness=Requiredness.NONE)
    public int getB() { return b; }

    private final test.fixtures.constants.Struct2 c;

    @ThriftField(value=3, name="c", requiredness=Requiredness.NONE)
    public test.fixtures.constants.Struct2 getC() { return c; }

    @Override
    public String toString()
    {
        return toStringHelper(this)
            .add("a", a)
            .add("b", b)
            .add("c", c)
            .toString();
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        Struct3 other = (Struct3)o;

        return
            Objects.equals(a, other.a) &&
            Objects.equals(b, other.b) &&
            Objects.equals(c, other.c);
    }

    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            a,
            b,
            c
        });
    }
}
