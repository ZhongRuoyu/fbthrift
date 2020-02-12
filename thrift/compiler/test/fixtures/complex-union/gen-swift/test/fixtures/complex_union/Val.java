/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.complex_union;

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
@ThriftStruct(value="Val", builder=Val.Builder.class)
public final class Val {
    @ThriftConstructor
    public Val(
        @ThriftField(value=1, name="strVal", requiredness=Requiredness.NONE) final String strVal,
        @ThriftField(value=2, name="intVal", requiredness=Requiredness.NONE) final int intVal,
        @ThriftField(value=9, name="typedefValue", requiredness=Requiredness.NONE) final Map<Short, String> typedefValue
    ) {
        this.strVal = strVal;
        this.intVal = intVal;
        this.typedefValue = typedefValue;
    }
    
    @ThriftConstructor
    protected Val() {
      this.strVal = null;
      this.intVal = 0;
      this.typedefValue = null;
    }
    
    public static class Builder {
        private String strVal;
        @ThriftField(value=1, name="strVal", requiredness=Requiredness.NONE)
        public Builder setStrVal(String strVal) {
            this.strVal = strVal;
            return this;
        }
        private int intVal;
        @ThriftField(value=2, name="intVal", requiredness=Requiredness.NONE)
        public Builder setIntVal(int intVal) {
            this.intVal = intVal;
            return this;
        }
        private Map<Short, String> typedefValue;
        @ThriftField(value=9, name="typedefValue", requiredness=Requiredness.NONE)
        public Builder setTypedefValue(Map<Short, String> typedefValue) {
            this.typedefValue = typedefValue;
            return this;
        }
    
        public Builder() { }
        public Builder(Val other) {
            this.strVal = other.strVal;
            this.intVal = other.intVal;
            this.typedefValue = other.typedefValue;
        }
    
        @ThriftConstructor
        public Val build() {
            return new Val (
                this.strVal,
                this.intVal,
                this.typedefValue
            );
        }
    }
    
    private static final TStruct STRUCT_DESC = new TStruct("Val");
    private final String strVal;
    public static final int _STRVAL = 1;
    private static final TField STR_VAL_FIELD_DESC = new TField("strVal", TType.STRING, (short)1);
    private final int intVal;
    public static final int _INTVAL = 2;
    private static final TField INT_VAL_FIELD_DESC = new TField("intVal", TType.I32, (short)2);
    private final Map<Short, String> typedefValue;
    public static final int _TYPEDEFVALUE = 9;
    private static final TField TYPEDEF_VALUE_FIELD_DESC = new TField("typedefValue", TType.MAP, (short)9);

    
    @ThriftField(value=1, name="strVal", requiredness=Requiredness.NONE)
    public String getStrVal() { return strVal; }
        
    @ThriftField(value=2, name="intVal", requiredness=Requiredness.NONE)
    public int getIntVal() { return intVal; }
        
    @ThriftField(value=9, name="typedefValue", requiredness=Requiredness.NONE)
    public Map<Short, String> getTypedefValue() { return typedefValue; }
    
    @Override
    public String toString() {
        return toStringHelper(this)
            .add("strVal", strVal)
            .add("intVal", intVal)
            .add("typedefValue", typedefValue)
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
    
        Val other = (Val)o;
    
        return
            Objects.equals(strVal, other.strVal) &&
            Objects.equals(intVal, other.intVal) &&
            Objects.equals(typedefValue, other.typedefValue) &&
            true;
    }
    
    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            strVal,
            intVal,
            typedefValue
        });
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (this.strVal != null) {
        oprot.writeFieldBegin(STR_VAL_FIELD_DESC);
        oprot.writeString(this.strVal);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldBegin(INT_VAL_FIELD_DESC);
      oprot.writeI32(this.intVal);
      oprot.writeFieldEnd();
      if (this.typedefValue != null) {
        oprot.writeFieldBegin(TYPEDEF_VALUE_FIELD_DESC);
        Map<Short, String> _iter0 = this.typedefValue;
        oprot.writeMapBegin(new TMap(TType.I16, TType.STRING, _iter0.size()));
        for (Map.Entry<Short, String> _iter1 : _iter0.entrySet()) {
          oprot.writeI16(_iter1.getKey());
          oprot.writeString(_iter1.getValue());

        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
}
