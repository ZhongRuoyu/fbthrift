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
@ThriftUnion("VirtualComplexUnion")
public final class VirtualComplexUnion {
    private static final Map<Short, String> ID_TO_THRIFT_NAME = new HashMap();
    static {
      ID_TO_THRIFT_NAME.put((short) 1, "thingOne");
      ID_TO_THRIFT_NAME.put((short) 2, "thingTwo");
    }
    private Object value;
    private short id;
    
    private static final TStruct STRUCT_DESC = new TStruct("VirtualComplexUnion");
    public static final int _THINGONE = 1;
    private static final TField THING_ONE_FIELD_DESC = new TField("thingOne", TType.STRING, (short)1);
    public static final int _THINGTWO = 2;
    private static final TField THING_TWO_FIELD_DESC = new TField("thingTwo", TType.STRING, (short)2);
    
    @ThriftConstructor
    public VirtualComplexUnion() {
    }
    
    public static VirtualComplexUnion fromThingOne(final String thingOne) {
        VirtualComplexUnion res = new VirtualComplexUnion();
        res.value = thingOne;
        res.id = 1;
        return res;
    }
    
    public static VirtualComplexUnion fromThingTwo(final String thingTwo) {
        VirtualComplexUnion res = new VirtualComplexUnion();
        res.value = thingTwo;
        res.id = 2;
        return res;
    }
    
    @ThriftField
    @Deprecated
    public void setThingOne(final String thingOne) {
        this.value = thingOne;
        this.id = 1;
    }
    @ThriftField
    @Deprecated
    public void setThingTwo(final String thingTwo) {
        this.value = thingTwo;
        this.id = 2;
    }

    @ThriftField(value=1, name="thingOne", requiredness=Requiredness.NONE)
    public String getThingOne() {
        if (this.id != 1) {
            throw new IllegalStateException("Not a thingOne element!");
        }
        return (String) value;
    }

    public boolean isSetThingOne() {
        return this.id == 1;
    }

    @ThriftField(value=2, name="thingTwo", requiredness=Requiredness.NONE)
    public String getThingTwo() {
        if (this.id != 2) {
            throw new IllegalStateException("Not a thingTwo element!");
        }
        return (String) value;
    }

    public boolean isSetThingTwo() {
        return this.id == 2;
    }

    @ThriftUnionId
    public short getThriftId() {
        return this.id;
    }

    public String getThriftName() {
        return ID_TO_THRIFT_NAME.get(this.id);
    }

    public void accept(Visitor visitor) {
        if (isSetThingOne()) {
            visitor.visitThingOne(getThingOne());
            return;
        }
        if (isSetThingTwo()) {
            visitor.visitThingTwo(getThingTwo());
            return;
        }
    }

    @Override
    public String toString() {
        return toStringHelper(this)
            .add("value", value)
            .add("id", id)
            .add("name", getThriftName())
            .add("type", value == null ? "<null>" : value.getClass().getSimpleName())
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

        VirtualComplexUnion other = (VirtualComplexUnion)o;

        return Objects.equals(this.id, other.id)
                && Objects.deepEquals(this.value, other.value);
    }

    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            id,
            value,
        });
    }

    public interface Visitor {
        void visitThingOne(String thingOne);
        void visitThingTwo(String thingTwo);
    }

    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      writeValue(oprot);
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private void writeValue(TProtocol oprot) throws TException {
      if (this.id != 0 && this.value == null ){
         throw new TProtocolException("Cannot write a Union with marked-as-set but null value!");
      }
      switch (this.id) {
      case _THINGONE: {
        oprot.writeFieldBegin(THING_ONE_FIELD_DESC);
        String thingOne = (String)this.value;
        oprot.writeString(thingOne);
        oprot.writeFieldEnd();
        return;
      }
      case _THINGTWO: {
        oprot.writeFieldBegin(THING_TWO_FIELD_DESC);
        String thingTwo = (String)this.value;
        oprot.writeString(thingTwo);
        oprot.writeFieldEnd();
        return;
      }
      default:
          throw new IllegalStateException("Cannot write union with unknown field ");
      }
    }
    
}
