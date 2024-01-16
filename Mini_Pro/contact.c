


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
// #include<math.h>

struct contact{
          char Ncont[20];
          char nome[40];
          char telephone[10];
          char email[40];
          char adresse[40];
          
}contact,con_mod,contacts[100];




void List_des_contacts(){
         int t3 , temp3 = 0;
         FILE*fcont ;
         fcont = fopen("contact_file.txt","r");
         system("cls");
         printf("\t\t\t");printf("                  == La List des contacts ==                       \n");
         printf("\t\t\t");printf("       ================================================        \n");
   
                           // printf("\t\t\t");printf("  \n");
                           printf("\n");
                           printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n","CNI","Nome","Num_TEL","Email","Addresse");
                           printf("\t\t\t");printf(" - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
                                 while(fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse) != EOF){
                                    temp3 = 1;
                                    printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse);
                                    printf("\n");
                        
                        }
                        fclose(fcont);
                        printf("\t\t\t");printf(" - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
                        printf("\n");
                        printf("\t\t\t");system("pause");
                        if (temp3 == 0){
                           printf("\t\t\t");printf("  >> Pas de contacts ");
                        }
                     }
                              


void Ajouter_un_contact(){
          FILE *fcont;
          fcont = fopen("contact_file.txt","a+");
          system("cls");
          
          printf("\t\t\t");printf("= Nouveau Contact = \n");
          printf("\t\t\t");printf("------------------- \n");
          printf("\t\t\t");printf(" Donner son CNI  : ");fflush(stdin);gets(contact.Ncont);
          printf("\t\t\t");printf(" Donner son nome: "); fflush(stdin);gets(contact.nome);
          printf("\t\t\t");printf(" Donner son telephone: ");fflush(stdin);gets(contact.telephone);
          printf("\t\t\t");printf(" Donner son  email: ");fflush(stdin);gets(contact.email);
          printf("\t\t\t");printf(" Donner son addresse: ");fflush(stdin);gets(contact.adresse);
          fprintf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse);
          fclose(fcont);
          printf("\t\t");printf(" >>> l\'operation est fait avec succees .. \n");

          printf("\t\t\t");system("pause");
          

}

void Rechercher_un_contact(){
         int t3 , temp = 0;
         FILE*fcont ;
         fcont = fopen("contact_file.txt","r");
         system("cls");
         printf("\t\t\t");printf("= Chercher  Un  Contact = \n");
         printf("\t\t\t");printf(" ----------------------- \n");
          
         printf("\t\t\t");printf("  -Chercher avec : \n");

         printf("\t\t\t");printf("   1.CNI  \n");
         printf("\t\t\t");printf("   2.Nome \n");
         printf("\t\t\t");printf("   3.Telephone \n");
         printf("\t\t\t");printf("   4.Email \n");
         printf("\t\t\t");printf("   5.Adresse \n");
         printf("\t\t\t");printf(" -------------- \n");
         printf("\t\t\t");printf("Donner la maniere :");fflush(stdin);scanf("%d",&t3);
         

        switch(t3){
                 
               case 1 :

                     printf("\t\t\t");printf(" Donner son CNI : ");fflush(stdin);gets(con_mod.Ncont);

                     while(fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse) != EOF){
                        // while(feof(fcont) == 0){
                           // fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.CNE,contact.nome,contact.telephone,contact.email,contact.adresse);
                           // printf("%s",contact.telephone);
                           // system("pause");
   
                        if(strcmp(con_mod.Ncont, contact.Ncont) == 0){
                           system("cls");
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\t\t\t");printf(" Les informations de Contact sont : \n");
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\n");
                           printf("\t\t\t");printf(" CNI     : %s \n \t\t\t Nome    : %s \n \t\t\t TEL     : %s \n \t\t\t Email   : %s \n \t\t\t Adresse : %s\n",contact.Ncont,contact.nome,contact.telephone,contact.email ,contact.adresse);
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\t\t\t");system("pause");
                           

                           temp = 1;
                        }
                        // else {
                        // (feof(fcont) != 0){
                        //  else 
                        //     temp = 1 ;
                     }

                         
                           if(temp ==  0){
                           // if (strcmp(con_mod.nome, contact.nome) != 0){
                           printf("\t\t\t");printf(" >> Ce 'CNI' n\'exist pas !! \n");
                           printf("\t\t");system("pause");
                           break ;
                           }
                        
                        // }
                     
                    

              
                  break;
 

               case 2 : 


                  printf("\t\t\t");printf(" Donner son Nome : ");fflush(stdin);gets(con_mod.nome);

                     while(fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse) != EOF){
                        // while(feof(fcont) == 0){
                           // fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.CNE,contact.nome,contact.telephone,contact.email,contact.adresse);
                           // printf("%s",contact.telephone);
                           // system("pause");
   
                        if(strcmp(con_mod.nome, contact.nome) == 0){
                           system("cls");
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\t\t\t");printf(" Les informations de Contact sont : \n");
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\n");
                           printf("\t\t\t");printf(" CNI     : %s \n \t\t\t Nome    : %s \n \t\t\t TEL     : %s \n \t\t\t Email   : %s \n \t\t\t Adresse : %s\n",contact.Ncont,contact.nome,contact.telephone,contact.email ,contact.adresse);
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\t\t\t");system("pause");
                           

                           temp = 1;
                        }
                        // else {
                        // (feof(fcont) != 0){
                        //  else 
                        //     temp = 1 ;
                     }

                         
                           if(temp ==  0){
                           // if (strcmp(con_mod.nome, contact.nome) != 0){
                           printf("\t\t\t");printf(" >> Ce 'nome' n\'exist pas !! \n");
                           printf("\t\t");system("pause");
                           break ;
                           }
                        
                        // }
                     
                    

              
                  break;
               case 3 : 

                  printf("\t\t\t");printf(" Donner son Telephone : ");fflush(stdin);gets(con_mod.telephone);

                     while(fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse) != EOF){
                        // while(feof(fcont) == 0){
                           // fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.CNE,contact.nome,contact.telephone,contact.email,contact.adresse);
                           // printf("%s",contact.telephone);
                           // system("pause");
   
                        if(strcmp(con_mod.telephone, contact.telephone) == 0){
                           system("cls");
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\t\t\t");printf(" Les informations de Contact sont : \n");
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\n");
                           printf("\t\t\t");printf(" CNI     : %s \n \t\t\t Nome    : %s \n \t\t\t TEL     : %s \n \t\t\t Email   : %s \n \t\t\t Adresse : %s\n",contact.Ncont,contact.nome,contact.telephone,contact.email ,contact.adresse);
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\t\t\t");system("pause");
                           

                           temp = 1;
                        }
                        // else {
                        // (feof(fcont) != 0){
                        //  else 
                        //     temp = 1 ;
                     }

                         
                           if(temp ==  0){
                           // if (strcmp(con_mod.nome, contact.nome) != 0){
                           printf("\t\t\t");printf(" >> Ce ' Num de Telephone' n\'exist pas !! \n");
                           printf("\t\t");system("pause");
                           break ;
                           }
                        
                        // }
                     
                    

              
                  break;

               case 4 : 

                  printf("\t\t\t");printf(" Donner son Email : ");fflush(stdin);gets(con_mod.email);

                     while(fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse) != EOF){
                        // while(feof(fcont) == 0){
                           // fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.CNE,contact.nome,contact.telephone,contact.email,contact.adresse);
                           // printf("%s",contact.telephone);
                           // system("pause");
   
                        if(strcmp(con_mod.email, contact.email) == 0){
                           system("cls");
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\t\t\t");printf(" Les informations de Contact sont : \n");
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\n");
                           printf("\t\t\t");printf(" CNI     : %s \n \t\t\t Nome    : %s \n \t\t\t TEL     : %s \n \t\t\t Email   : %s \n \t\t\t Adresse : %s\n",contact.Ncont,contact.nome,contact.telephone,contact.email ,contact.adresse);
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\t\t\t");system("pause");
                           

                           temp = 1;
                        }
                        // else {
                        // (feof(fcont) != 0){
                        //  else 
                        //     temp = 1 ;
                     }

                         
                           if(temp ==  0){
                           // if (strcmp(con_mod.nome, contact.nome) != 0){
                           printf("\t\t\t");printf(" >> Ce 'Email' n\'exist pas !! \n");
                           printf("\t\t");system("pause");
                           break ;
                           }
                        
                        // }
                     
                    

              
                  break;  



                  case 5 : 

                  printf("\t\t\t");printf(" Donner son Addresse : ");fflush(stdin);gets(con_mod.adresse);

                     while(fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse) != EOF){
                        // while(feof(fcont) == 0){
                           // fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.CNE,contact.nome,contact.telephone,contact.email,contact.adresse);
                           // printf("%s",contact.telephone);
                           // system("pause");
   
                        if(strcmp(con_mod.adresse, contact.adresse) == 0){
                           system("cls");
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\t\t\t");printf(" Les informations de Contact sont : \n");
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\n");
                           printf("\t\t\t");printf(" CNI     : %s \n \t\t\t Nome    : %s \n \t\t\t TEL     : %s \n \t\t\t Email   : %s \n \t\t\t Adresse : %s\n",contact.Ncont,contact.nome,contact.telephone,contact.email ,contact.adresse);
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\t\t\t");system("pause");
                           

                           temp = 1;
                        }
                        // else {
                        // (feof(fcont) != 0){
                        //  else 
                        //     temp = 1 ;
                     }

                         
                           if(temp ==  0){
                           // if (strcmp(con_mod.nome, contact.nome) != 0){
                           printf("\t\t\t");printf(" >> Ce 'Addresse' n\'exist pas !! \n");
                           printf("\t\t\t");printf("           --------------          \n");
                           printf("\t\t");system("pause");
                           break ;
                           }
                        
                        // }
                     
                    

              
                  break;    
                  
                    

               // add other cases, just change the variable CNE with th other that we want to use 
        }
      
         

   fclose(fcont);
}






void Modifier_un_contact(){
          int t2 ,temp2 = 0 ;
         FILE *fcont,*fchange;
         fcont = fopen("contact_file.txt","a+");
         fchange = fopen("contact_file_change.txt","w+");
         system("cls");
         printf("\t\t\t");printf("= Modifier Contact =\n");
         printf("\t\t\t");printf(" ------------------\n");
         //  FILE *fcont,*fchange;
         //  fcont = fopen("contact_file.txt","a+");
         //  fchange = fopen("contact_file_change.txt","w+");
          
         printf("\t\t\t"); printf("Donner le CNI du contact :"); fflush(stdin); gets(con_mod.Ncont);
         printf("\t\t\t");printf(" ------------------\n");
         while(fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse) != EOF ){
            if (strcmp(contact.Ncont,con_mod.Ncont) == 0 ){
                 temp2 = 1 ;
                   system("cls");
                   printf("\t\t\t");printf(" Le contact que tu va modifiee est le suivant \n");
                   printf("\t\t\t");printf(" -------------------------\n");
                   printf("\t\t\t");printf(" CNI     : %s \n \t\t\t Nome    : %s \n \t\t\t TEL     : %s \n \t\t\t Email   : %s \n \t\t\t Adresse : %s\n",contact.Ncont,contact.nome,contact.telephone,contact.email ,contact.adresse);
                   printf("\t\t\t");printf(" -------------------------\n");
                   printf("\t\t\t");printf(" Clicker sur 'Enter' pour commencer le modification \n");
                   printf("\t\t\t");printf(" -------------------------\n");
                   printf("\t\t\t");system("pause");
               // printf("\t\t\t");printf("= Choisir la partie a modifiee =\n");
               // printf("\t\t\t");printf(" ------------------------------\n");
               do{ 
                  system("cls");
               // printf("\t\t\t");printf("= Modifier Contact =\n");
               // printf("\t\t\t");printf(" ------------------\n");
               printf("\t\t\t");printf("1.Modifier le CNI\n");
               printf("\t\t\t");printf("2.Modifier le nom\n");
               printf("\t\t\t");printf("3.Modifier le telephone\n");
               printf("\t\t\t");printf("4.Modifier l\'Email\n");
               printf("\t\t\t");printf("5.Modifier l\'adress\n");
               printf("\t\t\t");printf("0.Terminer La modification\n");
               printf("\t\t\t");printf(" ------------------------------\n");
               printf("\t\t\t");printf(" Choisir la partie a modifiee : ");scanf("%d",&t2);
               // }while(t2 != 0);
               
               switch(t2) {
                 case 1 :
                     printf("\t\t\t");printf(" Donner son nouvelle CNI : ");fflush(stdin);gets(contact.Ncont);
                     printf("\t\t\t");printf("   >> CNI modifiee !\n");
                     // fprintf(fchange,"%s\t%s\t%s\t%s\t%s\n",contact.CNE,contact.nome,contact.telephone,contact.email,contact.adresse);
                     printf("\t\t\t");system("pause");

                  break;
                  case 2 :
                     printf("\t\t\t");printf(" Donner son nouvelle nome : ");fflush(stdin);gets(contact.nome);
                     printf("\t\t\t");printf("   >> Nome modifiee !\n");
                     // fprintf(fchange,"%s\t%s\t%s\t%s\t%s\n",contact.CNE,contact.nome,contact.telephone,contact.email,contact.adresse);
                     printf("\t\t\t");system("pause");

                  break;
                  case 3 :
                     printf("\t\t\t");printf(" Donner son nouvelle telephone : ");fflush(stdin);gets(contact.telephone);
                     printf("\t\t\t");printf("   >> num de TEL modifiee !\n");
                     // fprintf(fchange,"%s\t%s\t%s\t%s\t%s\n",contact.CNE,contact.nome,contact.telephone,contact.email,contact.adresse);
                    printf("\t\t\t"); system("pause");

                  break;
                  case 4 :
                     printf("\t\t\t");printf(" Donner son nouvelle Email : ");fflush(stdin);gets(contact.email);
                     printf("\t\t\t");printf("   >>Email modifiee !\n");
                     // fprintf(fchange,"%s\t%s\t%s\t%s\t%s\n",contact.CNE,contact.nome,contact.telephone,contact.email,contact.adresse);
                     printf("\t\t\t");system("pause");

                   break;
                  case 5 : 
                     printf("\t\t\t");printf(" Donner son nouvelle Addresse: ");fflush(stdin);gets(contact.adresse);
                     printf("\t\t\t");printf("   >>Addresse modifiee !\n");
                     // fprintf(fchange,"%s\t%s\t%s\t%s\t%s\n",contact.CNE,contact.nome,contact.telephone,contact.email,contact.adresse);
                     printf("\t\t\t");system("pause");
                      
                  break;
                  case 0 : 
                     fprintf(fchange,"%s\t%s\t%s\t%s\t%s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse);
                     break;
                     
                     } 

                 } while(t2 != 0); 
             }

            else {
               

               fprintf(fchange,"%s\t%s\t%s\t%s\t%s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse);

               // printf("\t\t\t");printf(" ------------------\n");

               // printf("\t\t\t");system("pause");
               // break;

            }
       }
      //  N   Num

     fclose(fcont);
     fclose(fchange);
     remove("contact_file.txt"),
     rename("contact_file_change.txt","contact_file.txt");
     if(temp2 == 0){
      printf("\t\t\t");printf("CNI n\'exist pas  .\n");
      printf("\t\t\t");system("pause");

     }

}
void Supprimer_contact(){

         int t2 ,temp4 = 0 ;
         char t3;
         FILE *fcont,*fchange;
         fcont = fopen("contact_file.txt","a+");
         fchange = fopen("contact_file_change.txt","w+");
         system("cls");
         printf("\t\t\t");printf("  == Supprimer un contact ==\n");
         printf("\t\t\t");printf("-----------------------------\n-");
         printf("\t\t\t");printf("   Donner son CNI : ");fflush(stdin);gets(con_mod.Ncont);
         while(fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse) != EOF ){
               if (strcmp(contact.Ncont,con_mod.Ncont) == 0 ){
                   temp4 = 1 ;
                    system("cls");
                   printf("\t\t\t");printf(" Le contact que tu va supprimer est le suivant \n");
                   printf("\t\t\t");printf(" -------------------------\n");
                   printf("\t\t\t");printf(" CNI     : %s \n \t\t\t Nome    : %s \n \t\t\t TEL     : %s \n \t\t\t Email   : %s \n \t\t\t Adresse : %s\n",contact.Ncont,contact.nome,contact.telephone,contact.email ,contact.adresse);
                   printf("\t\t\t");printf(" -------------------------\n");
                   printf("\t\t\t");printf(" Clicker sur 'Enter' pour confirmer la suppression  \n");
                   printf("\t\t\t");printf(" Clicker sur '1' pour annuler la suppression  \n");fflush(stdin);scanf("%c",&t3);
                   printf("\t\t\t");printf(" -------------------------\n");
            
               }
                
               else{

                  fprintf(fchange,"%s\t%s\t%s\t%s\t%s\n",contact.Ncont,contact.nome,contact.telephone,contact.email,contact.adresse);
                 }
           }
        fclose(fcont);
        fclose(fchange);
        if(t3=='1'){
        system("cls");
        printf("\t\t\t");printf(" >> annulation de suppression\n "); 
        printf("\t\t\t");system("pause");
        }
        else {
        remove("contact_file.txt");
        rename("contact_file_change.txt","contact_file.txt");
		}
        if (temp4 == 0){
         printf("\t\t\t");printf("CNI n\'exispas . .\n");
         printf("\t\t\t");system("pause");
               }
               else{
               	if (t3!='1'){
                   system("cls");
                   printf("\t\t\t");printf(" >> Contact supprimee\n "); 
                   printf("\t\t\t");system("pause");
                   }
               }

}



void traitercontacts(){
         int t3 ,mon, tem = 0;
         FILE*fcont ;
         struct contact temp; struct contact contacts[100] ; 
         int i, j, maxi, nombreContacts;
         fcont = fopen("contact_file.txt","r");
         system("cls");
         printf("\t\t\t");printf("= Traitement de  Contact = \n");
         printf("\t\t\t");printf(" ----------------------- \n");
          
         printf("\t\t\t");printf("  -Traiter Par: \n");

         printf("\t\t\t");printf("   1.CNI  \n");
         printf("\t\t\t");printf("   2.Nome \n");
         printf("\t\t\t");printf("   3.Telephone \n");
         printf("\t\t\t");printf("   4.Email \n");
         printf("\t\t\t");printf("   5.Adresse \n");
         printf("\t\t\t");printf(" -------------- \n");
         printf("\t\t\t");printf("Donner la maniere :");fflush(stdin);scanf("%d",&t3);
         switch(t3){
            case 1:
                system("cls");
               printf("\t\t\t");printf("= Traitement de  Contact = \n");
               printf("\t\t\t");printf(" ----------------------- \n");
               printf("\t\t\t");printf("  -Traiter CNI Par Ordre: \n");
               printf("\t\t\t");printf("   1.Croissant  \n");
               printf("\t\t\t");printf("   2.Decroissant \n");
               printf("\t\t\t");printf("Donner l'ordre :");fflush(stdin);scanf("%d",&mon);
                
                nombreContacts = 0;

                while (fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contacts[nombreContacts].Ncont,
                  contacts[nombreContacts].nome, contacts[nombreContacts].telephone,
                  contacts[nombreContacts].email, contacts[nombreContacts].adresse) != EOF){
	              nombreContacts++; }
	              
               for (i = 0; i < nombreContacts - 1; ++i) {
                  maxi = i;

                  for (j = i + 1; j < nombreContacts; ++j) {
                     if (strcmp(contacts[j].Ncont, contacts[maxi].Ncont) < 0) {
                        maxi = j;} }

             //  change les contacts
                  temp = contacts[maxi];
                  contacts[maxi] = contacts[i];
                  contacts[i] = temp; 
               }
                  // fin de bocle   

              system("cls");
              printf("\t\t\t");printf("                  == La List des contacts ==                       \n");
              printf("\t\t\t");printf("       ================================================        \n");
              printf("\n");
              printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n","CNI","Nome","Num_TEL","Email","Addresse");
              printf("\t\t\t");printf(" - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
             
    
     
             if (mon==1){
               for (i = 0; i < nombreContacts; ++i) {
                 printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n",contacts[i].Ncont, contacts[i].nome, contacts[i].telephone, contacts[i].email, contacts[i].adresse); }}
             if (mon==2){
               for (i = nombreContacts-1; i >=0 ; --i) {
             	 printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n",contacts[i].Ncont, contacts[i].nome, contacts[i].telephone, contacts[i].email, contacts[i].adresse); }}    	
    	
    	
	       fclose(fcont);
           printf("\t\t\t");printf(" - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
           printf("\n");
           printf("\t\t\t");system("pause");            	
            	
            	
            	
			break; 
			  
            case 2 :
            	system("cls");
               	 printf("\t\t\t");printf("= Traitement de  Contact = \n");
                 printf("\t\t\t");printf(" ----------------------- \n");
                printf("\t\t\t");printf("  -Traiter Nom Par Ordre: \n");
                printf("\t\t\t");printf("   1.Croissant  \n");
                printf("\t\t\t");printf("   2.Decroissant \n");
                printf("\t\t\t");printf("Donner l'ordre :");fflush(stdin);scanf("%d",&mon);
                
                nombreContacts = 0;

                while (fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contacts[nombreContacts].Ncont,
                  contacts[nombreContacts].nome, contacts[nombreContacts].telephone,
                  contacts[nombreContacts].email, contacts[nombreContacts].adresse) != EOF){
	              nombreContacts++; }
	              
                for (i = 0; i < nombreContacts - 1; ++i) {
                 maxi = i;

                 for (j = i + 1; j < nombreContacts; ++j) {
                 if (strcmp(contacts[j].nome, contacts[maxi].nome) < 0) {
                  maxi = j;} }

             //  change les contacts
              temp = contacts[maxi];
              contacts[maxi] = contacts[i];
              contacts[i] = temp; }
              system("cls");
              printf("\t\t\t");printf("                  == La List des contacts ==                       \n");
              printf("\t\t\t");printf("       ================================================        \n");
              printf("\n");
              printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n","CNI","Nome","Num_TEL","Email","Addresse");
              printf("\t\t\t");printf(" - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
             
    
     
             if (mon==1){
               for (i = 0; i < nombreContacts; ++i) {
                 printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n",contacts[i].Ncont, contacts[i].nome, contacts[i].telephone, contacts[i].email, contacts[i].adresse); }}
             if (mon==2){
               for (i = nombreContacts-1; i >=0 ; --i) {
             	 printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n",contacts[i].Ncont, contacts[i].nome, contacts[i].telephone, contacts[i].email, contacts[i].adresse); }}    	
    	
    	
	          fclose(fcont);
              printf("\t\t\t");printf(" - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
              printf("\n");
              printf("\t\t\t");system("pause");
              break;
           
           case 3:
           	    system("cls");
               	 printf("\t\t\t");printf("= Traitement de  Contact = \n");
                 printf("\t\t\t");printf(" ----------------------- \n");
                printf("\t\t\t");printf("  -Traiter Telephone Par Ordre: \n");
                printf("\t\t\t");printf("   1.Croissant  \n");
                printf("\t\t\t");printf("   2.Decroissant \n");
                printf("\t\t\t");printf("Donner l'ordre :");fflush(stdin);scanf("%d",&mon);
                
                nombreContacts = 0;

                while (fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contacts[nombreContacts].Ncont,
                  contacts[nombreContacts].nome, contacts[nombreContacts].telephone,
                  contacts[nombreContacts].email, contacts[nombreContacts].adresse) != EOF){
	              nombreContacts++; }
	              
               for (i = 0; i < nombreContacts - 1; ++i) {
               maxi = i;

               for (j = i + 1; j < nombreContacts; ++j) {
               if (strcmp(contacts[j].telephone, contacts[maxi].telephone) < 0) {
                maxi = j;} }

             //  change les contacts
              temp = contacts[maxi];
              contacts[maxi] = contacts[i];
              contacts[i] = temp; }
              system("cls");
              printf("\t\t\t");printf("                  == La List des contacts ==                       \n");
              printf("\t\t\t");printf("       ================================================        \n");
              printf("\n");
              printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n","CNI","Nome","Num_TEL","Email","Addresse");
              printf("\t\t\t");printf(" - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
             
    
     
             if (mon==1){
               for (i = 0; i < nombreContacts; ++i) {
                 printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n",contacts[i].Ncont, contacts[i].nome, contacts[i].telephone, contacts[i].email, contacts[i].adresse); }}
             if (mon==2){
               for (i = nombreContacts-1; i >=0 ; --i) {
             	 printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n",contacts[i].Ncont, contacts[i].nome, contacts[i].telephone, contacts[i].email, contacts[i].adresse); }}    	
    	
    	
	          fclose(fcont);
              printf("\t\t\t");printf(" - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
              printf("\n");
              printf("\t\t\t");system("pause");
              break;
           
           case 4:
           	     system("cls");
               	 printf("\t\t\t");printf("= Traitement de  Contact = \n");
                 printf("\t\t\t");printf(" ----------------------- \n");
                printf("\t\t\t");printf("  -Traiter Email Par Ordre: \n");
                printf("\t\t\t");printf("   1.Croissant  \n");
                printf("\t\t\t");printf("   2.Decroissant \n");
                printf("\t\t\t");printf("Donner l'ordre :");fflush(stdin);scanf("%d",&mon);
                
                nombreContacts = 0;

                while (fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contacts[nombreContacts].Ncont,
                  contacts[nombreContacts].nome, contacts[nombreContacts].telephone,
                  contacts[nombreContacts].email, contacts[nombreContacts].adresse) != EOF){
	              nombreContacts++; }
	              
               for (i = 0; i < nombreContacts - 1; ++i) {
               maxi = i;

               for (j = i + 1; j < nombreContacts; ++j) {
               if (strcmp(contacts[j].email, contacts[maxi].email) < 0) {
                maxi = j;} }

             //  change les contacts
               temp = contacts[maxi];
               contacts[maxi] = contacts[i];
               contacts[i] = temp; }
               system("cls");
               printf("\t\t\t");printf("                  == La List des contacts ==                       \n");
               printf("\t\t\t");printf("       ================================================        \n");
               printf("\n");
               printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n","CNI","Nome","Num_TEL","Email","Addresse");
               printf("\t\t\t");printf(" - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
             
    
     
              if (mon==1){
               for (i = 0; i < nombreContacts; ++i) {
                 printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n",contacts[i].Ncont, contacts[i].nome, contacts[i].telephone, contacts[i].email, contacts[i].adresse); }}
              if (mon==2){
                for (i = nombreContacts-1; i >=0 ; --i) {
             	 printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n",contacts[i].Ncont, contacts[i].nome, contacts[i].telephone, contacts[i].email, contacts[i].adresse); }}    	
    	
    	
	          fclose(fcont);
               printf("\t\t\t");printf(" - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
               printf("\n");
               printf("\t\t\t");system("pause");
           	   break;
           
           case 5:
           	          system("cls");
               printf("\t\t\t");printf("= Traitement de  Contact = \n");
               printf("\t\t\t");printf(" ----------------------- \n");
               printf("\t\t\t");printf("  -Traiter Adresse Par Ordre: \n");
               printf("\t\t\t");printf("   1.Croissant  \n");
               printf("\t\t\t");printf("   2.Decroissant \n");
               printf("\t\t\t");printf("Donner l'ordre :");fflush(stdin);scanf("%d",&mon);
                
                nombreContacts = 0;

                while (fscanf(fcont,"%s\t%s\t%s\t%s\t%s\n",contacts[nombreContacts].Ncont,
                  contacts[nombreContacts].nome, contacts[nombreContacts].telephone,
                  contacts[nombreContacts].email, contacts[nombreContacts].adresse) != EOF){
	                nombreContacts++; }
	              
               for (i = 0; i < nombreContacts - 1; ++i) {
               maxi = i;

               for (j = i + 1; j < nombreContacts; ++j) {
               if (strcmp(contacts[j].adresse, contacts[maxi].adresse) < 0) {
                maxi = j;} }

             //  change les contacts
              temp = contacts[maxi];
              contacts[maxi] = contacts[i];
              contacts[i] = temp; }
              system("cls");
              printf("\t\t\t");printf("                  == La List des contacts ==                       \n");
              printf("\t\t\t");printf("       ================================================        \n");
              printf("\n");
              printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n","CNI","Nome","Num_TEL","Email","Addresse");
              printf("\t\t\t");printf(" - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
             
    
     
             if (mon==1){
               for (i = 0; i < nombreContacts; ++i) {
                 printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n",contacts[i].Ncont, contacts[i].nome, contacts[i].telephone, contacts[i].email, contacts[i].adresse); }}
             if (mon==2){
               for (i = nombreContacts-1; i >=0 ; --i) {
             	 printf("\t\t\t");printf("%-13s|%-15s|%-13s|%-30s|%-15s\n",contacts[i].Ncont, contacts[i].nome, contacts[i].telephone, contacts[i].email, contacts[i].adresse); }}    	
    	
    	
	         fclose(fcont);
             printf("\t\t\t");printf(" - - - - - - - - - - -  - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");
             printf("\n");
             printf("\t\t\t");system("pause");
             break;
         }     
   }
     
         

void main(){
          int t;
          do{
                    system("cls");
       printf("\t\t\t");printf("     == LA MENU ==\n");
       printf("\t\t\t");printf("     -------------\n");
       printf("\t\t\t");printf("1-La liste des contacts\n");
       printf("\t\t\t");printf("2-Liste des contacts triee\n");
       printf("\t\t\t");printf("3-Ajouter un contact\n");
       printf("\t\t\t");printf("4-Rechercher un contact\n");
       printf("\t\t\t");printf("5-Modifier un contact\n");
       printf("\t\t\t");printf("6-Supprimer un contact\n"); 
       printf("\t\t\t");printf("       0- EXIT      \n");
       printf("\t\t\t");printf("  -----------------\n");
       printf("\t\t\t");printf("  Choisir un option : ");scanf("%d",&t);
       printf("\t\t\t");printf("  -----------------\n");
       switch(t){
          case 1 : List_des_contacts() ; break ;
          case 2 : traitercontacts();break;
          case 3 : Ajouter_un_contact() ; break ;
          case 4 : Rechercher_un_contact();break ;
          case 5 : Modifier_un_contact();break ;
          case 6 : Supprimer_contact() ; break ;
          
            }
          }while(t!=0);

}





 //  la fin de programme et ALHAMDULILLAH