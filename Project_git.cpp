/* PROGRAMA OpenGl. - 
Programa simple que exibe uma casa, usando cores primitivas 

*/
#include <GL\glut.h>

void redesenha(){

  
    glClearColor(0.9 , 0.9, 0.9, 1.0);//Cor utilizada no fundo da tela.

    glClear(GL_COLOR_BUFFER_BIT );// Pinta os buffers indicados com a cor do glClearColor().

    glPointSize(5.0);//define o tamanho do ponto.
     
    glColor3f(0,0,0);//defin a cor atual.

   // Quadriláteros

    glBegin(GL_QUADS); 
    
    //céu
 
       glColor3f(0, 0.85, 1);
        glVertex2f(-10,2);
        glVertex2f(-10,10);
        glVertex2f(10,10);
        glVertex2f(10,2);
    
     //gramado
       glColor3f(0, 0.5, 0);
        glVertex2f(-10,2);
        glVertex2f(-10,-10);
        glVertex2f(10,-10);
        glVertex2f(10,2);
    
	 
    //chamine
        glColor3f(0.5, 0.5, 0.5);
	    glVertex2f(0.1, 5);
        glVertex2f(0.8,7.5);
        glVertex2f(1.5,7.5);
        glVertex2f(1.5,6.5);
        
	    //parte da frente da casa
        glColor3f(1, 0.6, 0);
        glVertex2f( 0, 0);
        glVertex2f(0, 4);
        glVertex2f(6,4);
        glVertex2f( 6,-1);
        
        //lateral
        glColor3f(1, 0.65, 0);
	    glVertex2f( 6, -1);
        glVertex2f(8, 1);
        glVertex2f(8,4);
        glVertex2f( 6,4);
		
		//lateral
		glColor3f(1, 0.65, 0);
	    glVertex2f( 6, 4);
        glVertex2f(8, 4);
        glVertex2f(6.5,6);
        glVertex2f( 6.5,6); 
        
        //telhado-trás
		glColor3f(0.3, 0, 0);
	    glVertex2f( 8, 4);
        glVertex2f(6.5,6);
        glVertex2f(6.8,6.5);
        glVertex2f(8.5,4);   
		
		//telhado
		glColor3f(0.5, 0, 0);
	    glVertex2f( -1, 4);
        glVertex2f(1, 6.5);
        glVertex2f(6.8,6.5);
        glVertex2f( 6.1, 3.8);

        //porta
        glColor3f(0.3, 0.3, 0.3);
	    glVertex2f( 3, 0.1);
        glVertex2f(3,3.5);
        glVertex2f(5,3.4);
        glVertex2f(5,0);         
        
        //janelas
        glColor3f(0.3, 0.3, 0.3);
	    glVertex2f( 0.5, 1.5);
        glVertex2f(0.5,3.5);
        glVertex2f(2,3.4);
        glVertex2f(2,1.4);
       
       
         glColor3f(0.3, 0.3, 0.3);
	    glVertex2f( 6.3, 1.5);
        glVertex2f(6.3,3.5);
        glVertex2f(7.5,3.6);
        glVertex2f(7.5,1.6);
        
        //estrada
           glColor3f(0.3, 0.3, 0.3);
	    glVertex2f(3,-0.5);
        glVertex2f(-10,-10);
        glVertex2f(4,-10);
        glVertex2f(5,-0.8);
        

    glEnd();
    

    glFlush();//imprime o conteúdo do buffer na tela.

}
 

int main(int argc, char **argv) {

 

    glutInit(&argc, argv);//comando que inicia a biblioteca GLUT.

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
    /*Quando uma janela é criada, seu tipo é determinado pelo Display
   GLUT_SINGLE: Buffer simples
    GLUT_RGB...: Utilizaremos o modo RGB. */

    glutInitWindowSize(500, 500);//Tamanho da janela a ser aberta.

    glutInitWindowPosition(400, 50);//Posição iniciaal da janela.

    glutCreateWindow("Casa");//Cria uma janela Nomeada "Casa".

    gluOrtho2D(-10,10, -10, 10);//Escala da tela

    glutDisplayFunc(redesenha);//Registra a função Void, que será a rotina a
    //ser chamada sempre que necessário.

    glutMainLoop();//Mantém o programa em loop, aguradando os eventos.

   

   return(0);

}
