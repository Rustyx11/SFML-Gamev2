#include "level.h"

const int gridSize = 40;

level::level()
{
	
}

std::vector<wall> level::level1Wall(std::string wallTexture)
{
	std::vector<wall> walls;

	wall wall;


	for (float i = 0; i < 48; i++)
	{
		wall.setPos({ gridSize * i,26 * gridSize });
		walls.push_back(wall);
	}

	for (float i = 0; i < 44; i++)
	{
		wall.setPos({ i * gridSize, 21 * gridSize });
		walls.push_back(wall);
	}

	for (float i = 4; i < 48; i++)
	{
		wall.setPos({ i * gridSize, 16 * gridSize });
		walls.push_back(wall);
	}

	for (float i = 0; i < 44; i++)
	{
		wall.setPos({ i * gridSize, 11 * gridSize });
		walls.push_back(wall);
	}

	for (float i = 4; i < 48; i++)
	{
		wall.setPos({ i * gridSize, 6 * gridSize });
		walls.push_back(wall);
	}

	//texture initialization
	for (auto& wall : walls)
	{
		wall.initTexture(wallTexture);
	}

	return walls;
}

std::vector<ladder> level::level1Ladder(std::string ladderTexture)
{

	std::vector<ladder> ladders;

	ladder ladder;


	for (float i = 25; i > 20; i--)
	{
		ladder.setPos({ gridSize * 44,i * gridSize });
		ladders.push_back(ladder);
	}

	for (float i = 15; i > 10; i--)
	{
		ladder.setPos({ gridSize * 44,i * gridSize });
		ladders.push_back(ladder);
	}

	for (float i = 20; i > 15; i--)
	{
		ladder.setPos({ gridSize * 3,i * gridSize });
		ladders.push_back(ladder);
	}

	for (float i = 10; i > 5; i--)
	{
		ladder.setPos({ gridSize * 3,i * gridSize });
		ladders.push_back(ladder);
	}

	//texture initialization
	for (auto& ladder : ladders)
	{
		ladder.initTexture(ladderTexture);
	}

	return ladders;
}

std::vector<enemy> level::level1Enemy(std::string enemyTexture)
{
	std::vector<enemy> enemys;

	enemy enemy({ gridSize,gridSize});

	enemy.setPos({ gridSize * 3,10 * gridSize });
	enemy.movementInit({ gridSize * 43,10 * gridSize }, 400);
	enemys.push_back(enemy);

	enemy.setPos({ gridSize * 3,15 * gridSize });
	enemy.movementInit({ gridSize * 43,15 * gridSize }, 400);
	enemys.push_back(enemy);

	enemy.setPos({ gridSize * 3,20 * gridSize });
	enemy.movementInit({ gridSize * 43,20 * gridSize }, 400);
	enemys.push_back(enemy);

	//texture initialization
	for (auto& enemy : enemys)
	{
		enemy.initTexture("textures/enemy.png");
	}


	return enemys;
}

std::vector<key> level::level1Key(std::string keyTexture)
{
	int Id=0;

	std::vector<key> keys;

	key key;

	key.setPos({ gridSize * 5,gridSize * 10 });
	key.setId(Id);
	Id++;
	keys.push_back(key);

	key.setPos({ gridSize * 5,gridSize * 20 });
	key.setId(Id);
	Id++;
	keys.push_back(key);

	for (auto& key : keys)
	{
		key.initTexture(keyTexture);
	}

	return keys;
}

std::vector<powerUps> level::level1PowerUps(std::string powerUpTexture)
{
	int Id = 0;

	std::vector<powerUps> powers;

	powerUps power;

	power.setPos({ gridSize * 5,gridSize *  25});
	power.setId(Id);
	Id++;
	powers.push_back(power);

	for (auto& power : powers)
	{
		power.initTexture(powerUpTexture);
	}

	return powers;
}


std::vector<wall> level::level2Wall(std::string wallTexture)
{
	const int gridSize = 40;

	std::vector<wall> walls;

	wall wall;


	for (float i = 0; i < 48; i++)
	{
		wall.setPos({ gridSize * i,26 * gridSize });
		walls.push_back(wall);
	}

	for (float i = 0; i < 10; i++)
	{
		wall.setPos({ (i + 3) * gridSize, 20 * gridSize });
		walls.push_back(wall);
	}

	for (float i = 0; i < 17; i++)
	{
		wall.setPos({ (i + 16) * gridSize, 20 * gridSize });
		walls.push_back(wall);
	}

	for (float i = 0; i < 10; i++)
	{
		wall.setPos({ (i + 37) * gridSize, 20 * gridSize });
		walls.push_back(wall);
	}
	for (float i = 0; i < 26; i++)
	{
		wall.setPos({ (i + 4) * gridSize, 15 * gridSize });
		walls.push_back(wall);
	}

	for (float i = 0; i < 14; i++)
	{
		wall.setPos({ (i + 32) * gridSize, 15 * gridSize });
		walls.push_back(wall);
	}

	for (float i = 0; i < 10; i++)
	{
		wall.setPos({ (i + 5) * gridSize, 10 * gridSize });
		walls.push_back(wall);
	}

	for (float i = 0; i < 25; i++)
	{
		wall.setPos({ (i + 20) * gridSize, 10 * gridSize });
		walls.push_back(wall);
	}
	for (float i = 0; i < 38; i++)
	{
		wall.setPos({ (i + 6) * gridSize, 5 * gridSize });
		walls.push_back(wall);
	}

	for (auto& wall : walls)
	{
		wall.initTexture(wallTexture);
	}

	return walls;
}

std::vector<ladder> level::level2Ladder(std::string ladderTexture)
{
	const int gridSize = 40;

	std::vector<ladder> ladders;

	ladder ladder;


	for (float i = 25; i > 18; i--)
	{
		ladder.setPos({ gridSize * 14,i * gridSize });
		ladders.push_back(ladder);
	}

	for (float i = 25; i > 18; i--)
	{
		ladder.setPos({ gridSize * 34.5,i * gridSize });
		ladders.push_back(ladder);
	}


	for (float i = 19; i > 14; i--)
	{
		ladder.setPos({ gridSize * 30.5,i * gridSize });
		ladders.push_back(ladder);
	}
	for (float i = 19; i > 14; i--)
	{
		ladder.setPos({ gridSize * 30.5,i * gridSize });
		ladders.push_back(ladder);
	}
	for (float i = 14; i > 8; i--)
	{
		ladder.setPos({ gridSize * 17,i * gridSize });
		ladders.push_back(ladder);
	}

	for (auto& ladder : ladders)
	{
		ladder.initTexture(ladderTexture);
	}

	return ladders;
}

std::vector<enemy> level::level2Enemy(std::string enemyTexture)
{
	const int gridSize = 40;

	std::vector<enemy> enemys;

	enemy enemy({gridSize,gridSize});

	enemy.setPos({ gridSize * 3,19 * gridSize });
	enemy.movementInit({ gridSize * 12,19 * gridSize }, 400);
	enemys.push_back(enemy);

	enemy.setPos({ gridSize * 37,19 * gridSize });
	enemy.movementInit({ gridSize * 47,19 * gridSize }, 400);
	enemys.push_back(enemy);

	enemy.setPos({ gridSize * 16,19 * gridSize });
	enemy.movementInit({ gridSize * 33,19 * gridSize }, 400);
	enemys.push_back(enemy);

	enemy.setPos({ gridSize * 4,14 * gridSize });
	enemy.movementInit({ gridSize * 30,14 * gridSize }, 400);
	enemys.push_back(enemy);

	enemy.setPos({ gridSize * 32,14 * gridSize });
	enemy.movementInit({ gridSize * 46,14 * gridSize }, 400);
	enemys.push_back(enemy);

	enemy.setPos({ gridSize * 5,9 * gridSize });
	enemy.movementInit({ gridSize * 15,9 * gridSize }, 400);
	enemys.push_back(enemy);

	enemy.setPos({ gridSize * 20,9 * gridSize });
	enemy.movementInit({ gridSize * 45,9 * gridSize }, 400);
	enemys.push_back(enemy);

	enemy.setPos({ gridSize * 6,4 * gridSize });
	enemy.movementInit({ gridSize * 44,4 * gridSize }, 400);
	enemys.push_back(enemy);

	for (auto& enemy : enemys)
	{
		enemy.initTexture(enemyTexture);
	}

	return enemys;
}

std::vector<key> level::level2Key(std::string keyTexture)
{
	const int gridSize = 40;
	int Id = 0;

	std::vector<key> keys;

	key key;

	key.setPos({ gridSize * 35,gridSize * 9 });
	key.setId(Id);
	Id++;
	keys.push_back(key);

	key.setPos({ gridSize * 5,gridSize * 19 });
	key.setId(Id);
	Id++;
	keys.push_back(key);

	for (auto& key : keys)
	{
		key.initTexture(keyTexture);
	}

	return keys;
}
