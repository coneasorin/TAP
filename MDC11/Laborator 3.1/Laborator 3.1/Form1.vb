Imports System.Windows.Forms.VisualStyles

Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Din Afisaj As String = ""  
        If CheckBox1.Checked = True Then
            Afisaj += CheckBox1.Text + ", "
        End If
        If CheckBox2.Checked = True Then
            Afisaj += CheckBox2.Text + ", "
        End If
        If CheckBox3.Checked = True Then
            Afisaj += CheckBox3.Text + ", "
        End If
        If CheckBox4.Checked = True Then
            Afisaj += CheckBox4.Text + ", "
        End If
        If CheckBox5.Checked = True Then
            Afisaj += CheckBox5.Text + ", "
        End If
        If CheckBox6.Checked = True Then
            Afisaj += CheckBox6.Text + ", "
        End If

        TextBox1.Text = Afisaj
    End Sub
End Class
