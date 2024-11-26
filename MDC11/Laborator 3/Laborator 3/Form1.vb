Imports System.Windows.Forms.VisualStyles.VisualStyleElement

Public Class Form1
    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If RadioButton1.Checked = True Then
            If RadioButton3.Checked = True Then
                TextBox1.Text = "Femeie fumatoare"
            Else
                TextBox1.Text = "Femeie Nefumatoare"
            End If
        Else
            If RadioButton2.Checked = True Then
                If RadioButton3.Checked = True Then
                    TextBox1.Text = "Barbat Fumator"
                Else
                    TextBox1.Text = "Barbat Nefumator"
                End If
            End If
        End If
    End Sub
End Class

