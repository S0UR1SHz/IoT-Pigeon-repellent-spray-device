### **เครื่องไล่นกด้วยสารสกัดธรรมชาติ**
----------------------------------
### **Pigeon repellent spray device**
----------------------------------
### การวิจัยเรื่อง เครื่องพ่นกลิ่นไล่นกพิราบ ที่มีวัตถุประสงค์ของการวิจัย 
1) เพื่อออกแบบและสร้างเครื่องไล่นกด้วยสารสกัดธรรมชาติเพื่อไม่ให้มารบกวนบริเวณตู้กดน้ำข้างตึก SK2 
2) เพื่อสุขอนามัยที่ดีบริเวณข้างตึก SK2 
3) เพื่อให้บริเวณข้างตึก SK2 ไม่สกปรกจากอุจจาระนกพิราบ  
--------------------
### เครื่องพ่นกลิ่นไล่นกพิราบ ที่ได้ออกแบบระบบการทำงานจะแบ่งการทำงานของระบบออกเป็น 5 ส่วนหลักๆ ได้แก่ 
**ส่วนที่ 1 ส่วนของอินพุต ประกอบไปด้วย** 

-->การทำงานของระบบอัตโนมัติในการทำงานตามเวลาที่ตั้งค่าไว้บนแอปพลิเคชัน Blynk เพื่อทำการเปิด-ปิดปั๊มน้ำ

-->รับค่าข้อมูลผู้ใช้งานโดยตรง ซึ่งจะทำหน้าที่โดยแบ่งเป็นการทำงานแบบอัตโนมัติและการทำงานด้วยตัวเอง ซึ่งการตั้งอัตโนมัติคือเครื่องจะทำงานตามเวลาส่วนระบบการทำงานด้วยตัวเอง จะสั่งทำงานโดยตรง 

**ส่วนที่ 2 ส่วนประมวณผลโดยใช้**

-->ไมโครคอนโทรลเลอร์ ESP32 ทำงานโดยการควบคุมการทำงาน 

-->Relay ทำงานโดยการควบคุมการทำงานของปั๊มพ่นน้ำยา 

**ส่วนที่ 3 ส่วนแสดงผล** 

-->แสดงสถานะระบบต่างๆ ผ่านแอปพลิเคชัน Blynk 

**ส่วนที่ 4 เอาต์พุต** 

-->ปั๊มน้ำทำการทำงานแล้วส่งน้ำยาไหลไปตามท่อสายยางแล้วพ่นออกมาเป็นละอองตามหัวสปริงเกอร์ที่ทำการติดตั้งไว้ 

**ส่วนที่ 5 การเชื่อมต่อ database** 

-->จะเชื่อมต่อ Wi-Fi เพื่อรับคำสั่งจากแอปพลิเคชัน Blynk เพื่อเก็บข้อมูลการทำงานของระบบเพื่อวิเคราะห์ประสิทธิภาพ เพื่อสามารถนำข้อมูลนี้มาปรับเปลี่ยนตารางการทำงานในอนาคต หรือทำข้อมูลสถิติการทำงาน
