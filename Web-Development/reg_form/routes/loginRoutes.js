const express=require("express");
const model=require("./../schema/registration");
const Router=express.Router();
Router.get("/:email",async (req,res,next)=>{
    console.log(req.params.email);
    const data=await model.findOne({email:req.params.email}).catch(err=>{console.log(err)});
    console.log(data);
    res.status(200).send(data);
})

Router.post("/",async (req,res,next)=>{
    console.log("hello");
    const data=req.body;
    console.log(data);
    const result=await model.create(data).catch(err=>{console.log(err)});
    res.status(200).send(result);
})
module.exports=Router;