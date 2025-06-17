# Attendance Monitoring System

A web-based Attendance Monitoring System built using Python (Flask) and MySQL. It allows for role-based login, attendance management by teachers, and a simple dashboard to monitor attendance activity.

## 🚀 Features

- Role-based login system: Admin, Teacher, Student
- Admin can add teachers and students
- Teachers can take attendance for their classes
- Attendance records stored in a MySQL database
- Basic HTML templates for frontend using Flask’s templating engine
- Responsive dashboard for viewing attendance
- Notifications and alerts for attendance thresholds (extendable)

## 🗂 Project Structure

```
Attendance-Monitoring-System/
├── static/                      # CSS and JavaScript files
├── templates/                   # HTML templates for each page
├── db.sql                       # MySQL schema and sample data
├── app.py                       # Main Flask application
├── requirements.txt             # Python dependencies
└── README.md                    # Project documentation
```

## 💻 Technologies Used

- Python 3
- Flask
- MySQL
- HTML/CSS (Bootstrap)
- mysql-connector-python

## 📦 Installation

1. **Clone the repository**
```bash
git clone https://github.com/manasdarak10/Attendance-Monitoring-System.git
cd Attendance-Monitoring-System
```

2. **Install required Python packages**
```bash
pip install -r requirements.txt
```

3. **Set up MySQL database**
- Open MySQL and create a database:
```sql
CREATE DATABASE attendance_db;
```
- Import the provided SQL file:
```bash
mysql -u your_username -p attendance_db < db.sql
```

4. **Configure your DB credentials in `app.py`**
```python
app.config['MYSQL_HOST'] = 'localhost'
app.config['MYSQL_USER'] = 'your_username'
app.config['MYSQL_PASSWORD'] = 'your_password'
app.config['MYSQL_DB'] = 'attendance_db'
```

5. **Run the application**
```bash
python app.py
```
- Open your browser and go to: `http://localhost:5000`

## 📈 Future Improvements

- Add biometric or RFID integration for automatic check-ins
- Enable attendance export in CSV/PDF format
- Add notifications via SMS or email for absentees
- Implement analytics and reporting dashboards
- Enhance UI using a modern frontend framework (React, Vue)

## 🙋 Author

**Manas Darak**  
GitHub: [https://github.com/manasdarak10](https://github.com/manasdarak10)
