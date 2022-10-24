const mongoose=require("mongoose");
const schema=new mongoose.Schema({
    email:{
        type:String,
        unique:true,
        trim:true
    },
    name:{
       type:String,
       trim:true 
    },
    phoneNo:{
        type:Number,
        unique:true
    },
    gender:{
        type:String,
    },
    address:{
        type:String,
        trim:true
    },
    countryId:{
        type:Number
    }

});
const model=mongoose.model("login",schema);
module.exports=model;