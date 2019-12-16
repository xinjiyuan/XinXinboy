// Auto-generated. Do not edit!

// (in-package test_the_launch.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class Num {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.mun = null;
    }
    else {
      if (initObj.hasOwnProperty('mun')) {
        this.mun = initObj.mun
      }
      else {
        this.mun = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Num
    // Serialize message field [mun]
    bufferOffset = _serializer.int64(obj.mun, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Num
    let len;
    let data = new Num(null);
    // Deserialize message field [mun]
    data.mun = _deserializer.int64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a message object
    return 'test_the_launch/Num';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '24a51b5281936e58f18138cdb36963e4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int64 mun
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new Num(null);
    if (msg.mun !== undefined) {
      resolved.mun = msg.mun;
    }
    else {
      resolved.mun = 0
    }

    return resolved;
    }
};

module.exports = Num;
