����   A B
      java/lang/Object <init> ()V  java/util/Scanner	 
     java/lang/System in Ljava/io/InputStream;
     (Ljava/io/InputStream;)V	 
    out Ljava/io/PrintStream;  Enter student name: 
      java/io/PrintStream print (Ljava/lang/String;)V
     ! nextLine ()Ljava/lang/String; # Enter roll number:  % Enter total marks obtained: 
  ' ( ) 	nextFloat ()F + Student
 * -  . ((Ljava/lang/String;Ljava/lang/String;F)V 0 
Student Details:
  2 3  println
 * 5 6  displayStudentData
  8 9  close ; Q8 Code LineNumberTable main ([Ljava/lang/String;)V 
SourceFile Q8.java ! :           <        *� �    =        	 > ?  <   �     R� Y� 	� L� � +� M� "� +� N� $� +� &8� *Y,-� ,:� /� 1� 4+� 7�    =   2               % " - # 3 % @ ( H ) M + Q ,  @    A