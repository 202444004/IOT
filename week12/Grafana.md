# Grafana 설치
## 1. Install the prerequisite packages
```
sudo apt-get install -y apt-transport-https software-properties-common wget
```
## 2. Import the GPG key:
```
sudo mkdir -p /etc/apt/keyrings/
wget -q -O - https://apt.grafana.com/gpg.key | gpg --dearmor | sudo tee /etc/apt/keyrings/grafana.gpg > /dev/null
```
## 3. To add a repository for stable releases, run the following command:
```
echo "deb [signed-by=/etc/apt/keyrings/grafana.gpg] https://apt.grafana.com stable main" | sudo tee -a /etc/apt/sources.list.d/grafana.list
```
## 4. Run the following command to update the list of available packages:
```
sudo apt-get update && sudo apt-get install grafana -y
```
## 5. Run the following command to server start
```
sudo systemctl start grafana-server
```
## influxdb import with python
```
pip install influxdb
```
* hint: See PEP 668 for the detailed specification.
```
sudo rm /usr/lib/python3.11/EXTERNALLY-MANAGED
```
