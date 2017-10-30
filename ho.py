import requests

hotel = input()

#print(hotel)

zomato_url ="https://developers.zomato.com/api/v2.1/locations"
param = {"query": hotel,}
header = {
            'User-Agent': 'curl/7.30.0',
                 'Accept': 'application/json',                                                  
                 'user-key': 'b7d9287f5bdd31409214ac5a6bde1482',
}
zomato_rs = requests.get(url=zomato_url,headers=header,params=param).json()
entity_id = zomato_rs['location_suggestions']
entity_id = entity_id[0]

entity1_id = entity_id['entity_id']
entity1_type = entity_id['entity_type']

zomato_url2 = "https://developers.zomato.com/api/v2.1/location_details?entity_id="+str(entity1_id)+"&entity_type="+entity1_type

zomato_ans = requests.get(url = zomato_url2,headers=header).json()

res = zomato_ans['best_rated_restaurant']

for data in res:
        print('----------------------------------')
        print(data['restaurant']['name'])
