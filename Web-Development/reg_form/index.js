const express = require("express");
const mongoose=require("mongoose");
const app=require("express")();
const bodyParser=require("body-parser");
const port=7777;
const url='mongodb+srv://avdubey460:221208up@cluster0.kaqsx.mongodb.net/myFirstDatabase?retryWrites=true&w=majority';
mongoose.connect(url).then(()=>{
    console.log('connected to database.....');
}).catch(err=>{console.log(err)});

app.listen(port,()=>{
    console.log(`server running at port ${port}`);
})

app.use(bodyParser.urlencoded({
  extended: true
}));

app.use(express.static(`${__dirname}/public`));

const loginRoutes=require('./routes/loginRoutes');

app.use('/login',loginRoutes);

app.get('/',(req,res,next)=>{
    res.status(200).sendFile(`${__dirname}/public/index.html`); 
});
