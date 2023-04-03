/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

/**
 * Changes the native type of a Thrift object.
 * `name` and `template` correspond to `cpp.type` and `cpp.template` respecively.
 */
@SuppressWarnings({ "unused", "serial" })
public class Type implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("Type");
  private static final TField NAME_FIELD_DESC = new TField("name", TType.STRING, (short)1);
  private static final TField TEMPLATE_FIELD_DESC = new TField("template", TType.STRING, (short)2);

  public final String name;
  public final String template;
  public static final int NAME = 1;
  public static final int TEMPLATE = 2;

  public Type(
      String name,
      String template) {
    this.name = name;
    this.template = template;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public Type(Type other) {
    if (other.isSetName()) {
      this.name = TBaseHelper.deepCopy(other.name);
    } else {
      this.name = null;
    }
    if (other.isSetTemplate()) {
      this.template = TBaseHelper.deepCopy(other.template);
    } else {
      this.template = null;
    }
  }

  public Type deepCopy() {
    return new Type(this);
  }

  public String getName() {
    return this.name;
  }

  // Returns true if field name is set (has been assigned a value) and false otherwise
  public boolean isSetName() {
    return this.name != null;
  }

  public String getTemplate() {
    return this.template;
  }

  // Returns true if field template is set (has been assigned a value) and false otherwise
  public boolean isSetTemplate() {
    return this.template != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof Type))
      return false;
    Type that = (Type)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetName(), that.isSetName(), this.name, that.name)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetTemplate(), that.isSetTemplate(), this.template, that.template)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {name, template});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static Type deserialize(TProtocol iprot) throws TException {
    String tmp_name = null;
    String tmp_template = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case NAME:
          if (__field.type == TType.STRING) {
            tmp_name = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case TEMPLATE:
          if (__field.type == TType.STRING) {
            tmp_template = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();

    Type _that;
    _that = new Type(
      tmp_name
      ,tmp_template
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.name != null) {
      oprot.writeFieldBegin(NAME_FIELD_DESC);
      oprot.writeString(this.name);
      oprot.writeFieldEnd();
    }
    if (this.template != null) {
      oprot.writeFieldBegin(TEMPLATE_FIELD_DESC);
      oprot.writeString(this.template);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}

