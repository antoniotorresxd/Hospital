Hospital V.1.0.1

- Integrantes
    + Castro Torres Diego
    + Guevara Martínez Jorgue Luis
    + López Jiménez Angelica Estefanía
    + Torres Martínez Antonio de Jesus

- Alcance del proyeto 
    El software promete tener un registro de pacientes y usuario, afiliados a una sede en especifico.

- Caracteristicas.

    - Se podrá crear una sede, la cual será la raiz que almacene tanto los doctores como los pacientes, esta consta de los siguientes campos:
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
            * Telefono
            * Identificador de paciente
            * Un campo para asignar la enfermedad
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
            * Telefono
            * Identificador de doctor
            * Especialidad
    
    - Se le podra asignar un doctor a cada paciente, y este será el encargado de poder asignar la enfermedad que padece.

    - Cada modulo cuenta con las operaciones de registro, busqueda y eliminación (estas ultimas funcionan por identificador)

    Uso:
	
	- Se debe crear la sede la cual contendra toda la información
	- Con la sede creada se puede crear tanto pacientes como doctores
	- Cuando exista al menso un paciente y un doctor se habilitaran las opciones de asignar doctor, y asignar la enfermdad