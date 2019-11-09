struct serverResponse {
	string responseContent<2000>;
};

struct inputMatrixes {
	string matrix1<2000>;
	string matrix2<2000>;
};

program ASSIGNMENT3{
    version ASSIGNMENT3_VERS{
        serverResponse get_date_and_time() = 1;
        serverResponse sort_list_integers(serverResponse) = 2;
        serverResponse list_of_files_current_folder() =3;
        serverResponse matrix_multiply(inputMatrixes) = 4;
        serverResponse reverse_encryption(serverResponse) = 5;
    } = 1;
} = 0x31234567;