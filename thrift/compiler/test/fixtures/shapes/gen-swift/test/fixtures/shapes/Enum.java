/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.shapes;

import com.facebook.swift.codec.*;

@SwiftGenerated
public enum Enum
{
    ENUM(1);

    private final int value;

    Enum(int value)
    {
        this.value = value;
    }

    @ThriftEnumValue
    public int getValue()
    {
        return value;
    }

    public static Enum fromInteger(int n) {
        switch (n) {
        case 1:
            return ENUM;
        default:
            return null;
        }
    }
}
