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
import org.apache.thrift.*;
import org.apache.thrift.async.*;
import org.apache.thrift.server.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftStruct(value="Range", builder=Range.Builder.class)
public final class Range {
    @ThriftConstructor
    public Range(
        @ThriftField(value=1, name="min", requiredness=Requiredness.REQUIRED) final int min,
        @ThriftField(value=2, name="max", requiredness=Requiredness.REQUIRED) final int max
    ) {
        this.min = min;
        this.max = max;
    }
    
    @ThriftConstructor
    protected Range() {
      this.min = 0;
      this.max = 0;
    }
    
    public static class Builder {
        private int min;
        @ThriftField(value=1, name="min", requiredness=Requiredness.REQUIRED)
        public Builder setMin(int min) {
            this.min = min;
            return this;
        }
        private int max;
        @ThriftField(value=2, name="max", requiredness=Requiredness.REQUIRED)
        public Builder setMax(int max) {
            this.max = max;
            return this;
        }
    
        public Builder() { }
        public Builder(Range other) {
            this.min = other.min;
            this.max = other.max;
        }
    
        @ThriftConstructor
        public Range build() {
            return new Range (
                this.min,
                this.max
            );
        }
    }
    
    private static final TStruct STRUCT_DESC = new TStruct("Range");
    private final int min;
    public static final int _MIN = 1;
    private static final TField MIN_FIELD_DESC = new TField("min", TType.I32, (short)1);
    private final int max;
    public static final int _MAX = 2;
    private static final TField MAX_FIELD_DESC = new TField("max", TType.I32, (short)2);

    
    @ThriftField(value=1, name="min", requiredness=Requiredness.REQUIRED)
    public int getMin() { return min; }
        
    @ThriftField(value=2, name="max", requiredness=Requiredness.REQUIRED)
    public int getMax() { return max; }
    
    @Override
    public String toString() {
        return toStringHelper(this)
            .add("min", min)
            .add("max", max)
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
    
        Range other = (Range)o;
    
        return
            Objects.equals(min, other.min) &&
            Objects.equals(max, other.max) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            min,
            max
        });
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldBegin(MIN_FIELD_DESC);
      oprot.writeI32(this.min);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(MAX_FIELD_DESC);
      oprot.writeI32(this.max);
      oprot.writeFieldEnd();
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
