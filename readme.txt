- Alcance del proyeto Hospital V.1.0.1
    El software promete tener un registro de pacientes y usuario, afiliados a una sede en especifico.

- Caracteristicas.

    - Se podrá crear una sede, la cual será la raiz que almacene tanto los doctores como los pacientes, esta consta de los siguienest campos:
        * Nombre del hospital
        * Direccion fiscal 
        * Telefono
        * Doctores
        * Pacientes

    - Modulo pacientes:
        - Se pueden crear n cantidad de pacientes (este dato se establece de acuerdo a las necesidades del cliente)
        los cuales constaran de los datos asigandos por:
            * Nombre
            * Apellidos
            * Genero
            * Fecha Nacimiento
            * Edad
            * Direccion fiscal
            * telefono
            * Identificador de paciente
            * Una entrada y una salida
            * un campo para asignar la enfermedad
            * Doctor asignado
        
    - Modulo de Doctores:
        Se pueden crear n cantidad de pacientes (este dato se establece de acuerdo a las necesidades del cliente)
        los cuales constaran de los datos asigandos por:
            * Nombre
            * Apellidos
            * Genero
            * Fecha Nacimiento
            * Edad
            * Direccion fiscal
            * telefono
            * Identificador de doctor
            * Especialidad
    
    - Se le podra asignar un doctor a cada paciente, y este será el encargado de poder asignar la salida del paciente asi como la enfermedad que padece.

    - Cada modulo cuenta con las operaciones de registro, busqueda y eliminación (estas ultimas funcionan por identificador)

    Notas:
        La entrada se da cuando se registra el paciente y la salida cuando se actualiza la enfermedad del paciente.